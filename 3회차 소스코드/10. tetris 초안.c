#include <stdio.h>
#include <string.h>
//10. tetris

int main() {
  int C,R;
  scanf("%d %d", &C, &R); // 막대기 크기와 전체격자수
  int arr[20][20] = {0};
  for (int i=0; i<R; i++) {
    for (int j=0; j<R; j++) {
      scanf("%d ", &arr[i][j]);
    }
  }

  int ans, idx = 0;
  int zero, score, cnt;
  for (int j=0; j<C; j++) {
    zero = j+1;
    for (int i=0; i<R; i++) {
      if (arr[i][j] == 1) {
        zero = 0;
        break;
      }
    }

    if (zero<4)
      continue;
    for (int i=0; i<4; i++) {
      arr[i][j] = 1;
    }
    score = 0;
    for (int i=0; i<R; i++) {
      cnt =0;
      for (int k =0; k<C; k++) {
        if (arr[i][k] == 1) cnt++;
      }
      if (cnt == C) score ++;
    }
    if (ans < score) {
      ans = score;
      idx = j+1;
    }

    for (int i=0; i<4; i++) {
      arr[i+zero][j] = 0;
    }
  }

  printf("%d %d", idx, ans);
  
}