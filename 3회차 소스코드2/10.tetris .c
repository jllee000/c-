#include <stdio.h>
#include <string.h>
//10. tetris

int main() {
  int C,R;
  scanf("%d %d", &C, &R); // 전체격자수
  int arr[20][20] = {0};
  for (int i=1; i<=R; i++) {
    for (int j=1; j<=C; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int ans, idx = 0;
  int zero, score, cnt;
  for (int j=1; j<=C; j++) { // 열을 돌다보면
    zero = R; // 일단 기본은 맨 밑으로 떨어지는 전제
    for (int i=1; i<=R; i++) {
      if (arr[i][j] == 1) { // 그 자리에 누가 채워져 있으면
        zero = i-1; // 그 행 번째의 위부터 추가
        break;
      }
    }

    if (zero<4) {
        continue;
    }
    for (int i=0; i<4; i++) {
      arr[zero-i][j] = 1;
    }
    score = 0;
    for (int i=1; i<=R; i++) {
      cnt =0;
      for (int k =1; k<=C; k++) {
        if (arr[i][k] == 1) cnt++;
      }
      if (cnt == C) {
          score ++;
      }
    }
    if (ans < score) {
      ans = score;
      idx = j;
    }

    for (int i=0; i<4; i++) {
      arr[zero-i][j] = 0;
    }
  }

  printf("%d %d", idx, ans);
  return 0;
  
}
