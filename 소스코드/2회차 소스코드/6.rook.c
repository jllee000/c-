#include <stdio.h>
#include <string.h>
// 6. rook

int main() {
  int arr[8][8] = {0};
  // 입력값 넣기
  for (int i=0; i<8; i++) {
    scanf("%d %d %d %d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4], &arr[i][5], &arr[i][6], &arr[i][7]);
  }

  // 킹 위치 찾기
  int kingx, kingy, rookx, rooky;
  for (int i=0; i<8; i++) {
    for (int j=0; j<8; j++) {
      if (arr[i][j] == 1) {
        kingx = i;
        kingy = j;
      }
      if (arr[i][j] == 2) {
        rookx = i;
        rooky = j;
      }
    }
  }
 
  int win = -1;
  
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

  printf("%d", win);
    
  
  return 0;
}