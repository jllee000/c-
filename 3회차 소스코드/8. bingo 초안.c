#include <stdio.h>
#include <string.h>
//8. bingo

int main() {
  int arr[5][5] = {0};
  int game[5][5] = {0};
  int cntcross1, cntcross2, cntline, c = 0;
  int num = 0;
  for (int i=0; i<5; i++) {
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
  }
  // 사회자
  for (int i=0; i<5; i++) {
    scanf("%d %d %d %d %d", &game[i][0], &game[i][1], &game[i][2], &game[i][3], &game[i][4]);
  }

  // 찾기
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) { // 빙고판 탐색하면서
      for (int r=0; r<5; r++) {
        for (int k=0; k<5; k++) { // 사회자 번호
          if (arr[i][j] == game[k][r]) {
            arr[i][j] = 0;
          }
        }
      }
      // 각 열.행 빙고개수 세기
      if (arr[i][j] == 0) {
        cntline ++;
        if (cntline == 5) {
          num = (i+1)*5 + (j+1);
          printf("%d", num);
          return 0;
        }
      }
      if ((i==j) && (arr[i][j] == 0)) {
        cntcross1 ++;
        if (cntcross1 == 5) {
          num = (i+1)*5 + (j+1);
          printf("%d", num);
          return 0;
        }
      }
      if ((i+j==4) && (arr[i][j] == 0)) {
        cntcross2 ++;
        if (cntcross2 == 5) {
          num = (i+1)*5 + (j+1);
          printf("%d", num);
          return 0;
        }
      }
      else {
        printf("?\n");
        return 0;
      }
    }
  }

}

