#include <stdio.h>
#include <string.h>
#include <math.h>
// 6. rook

int main() {
  int arr[8][8] = {0};
  // 입력값 넣기
  for (int i=0; i<8; i++) {
    scanf("%d %d %d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5], &arr[i][6], &arr[i][7]);
  }

  // 킹 위치 찾기
  int kingx, kingy;
  int rookcnt = 0;
  int rookX[2], rookY[2] = {0};
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (arr[i][j] == 1) {
        kingx = i;
        kingy = j;
      }
      if (arr[i][j] == 2) {
        rookcnt++; // 룩개수 세고
        rookX[rookcnt-1] = i;
        rookY[rookcnt-1] = j;
      }
    }
  }
 
  int win = -1;
  int rookx, rooky;
  
  for (int r = 0; r < rookcnt; r++) {
    rookx = rookX[r];
    rooky = rookY[r];
    for (int i=0; i<8; i++) {
     if (kingx == rookx) {
       if (kingy < rooky) {
         for (int i = kingy; i < rooky; i++)
           if (arr[kingx][i] == 3) {
             win = 0;
             break;
           } 
         else win = 1;
       } 
     }
       else if (kingy > rooky) {
         for (int i = rooky; i < kingy; i++) {
           if (arr[kingx][i] == 3) {
             win = 0;
             break;
           }
           else win = 1;
         }
       }
     else if (kingy == rooky) {
       if (kingx < rookx) {
         for (int i = kingy; i < rooky; i++) {
           if (arr[i][kingy] == 3) {
             win = 0;
            break;
           }
           else win = 1;
         }
       }
       else if (kingx > rookx) {
         for (int i = rookx; i < kingx; i++) {
           if (arr[i][kingy] == 3) {
             win = 0;
             break;
           }
           else win = 1;
         }
       }  
     }
     else
       win = 0;
    }
  }

  printf("%d", win);
    
  
  return 0;
}



