#include <stdio.h>
#include <string.h>
// 1. maxofarr
int main() {
  int arr[9][9] = {0};
  // 입력 넣
  for (int i = 0; i < 9; i++) {
    scanf("%d %d %d %d %d %d %d %d %d",&arr[i][0],&arr[i][1],&arr[i][2],&arr[i][3],&arr[i][4],&arr[i][5],&arr[i][6],&arr[i][7],&arr[i][8]);
  }
  int max[9] = {0}; // 각 줄의 최대
  int col[9] = {0}; // 각 줄 최대의 열(세로줄) 인덱스
  // 비교
  for (int i = 0; i <9; i ++) { // 각 줄마다 먼저 최대
    max[i] = arr[i][0];
    for (int j = 0; j <9; j++) {
      if (max[i] <= arr[i][j]) {
        max[i] = arr[i][j]; // 그 줄의 최대를 넣기
        col[i] = j; // 그줄 최대값의 열 위치저장
      }
    }
    // 줄별 최댓값 확인 printf("%d\n", max[i]);
  }
  // 각 i 줄별로 총 최대값 위치 찾기
  int row = 0;
  int realmax = max[0];
  for (int i = 0; i < 9; i++) {
    if (max[i] >= realmax) {
      realmax = max[i];    
      row = i;
    }
  }
  // 최댓값 확인 
  printf("%d\n", realmax);
  printf("%d %d", row+1, col[row]+1);
  return 0;
  
}
