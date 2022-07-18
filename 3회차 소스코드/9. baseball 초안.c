#include <stdio.h>
#include <string.h>
//9. baseball game

int main() {
  int n;
  int num[100][3], strike[100], ball[100] = {0};
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
    scanf("%d %d %d", num[i], &strike[i], &ball[i]);
    // 입력값 숫자를 배열형태로 저장하기 위해선 &빼기
    // num[0][0] 은 첫숫자의 백의자리수, num[0][2] 일의자리수
  }
  int result = 0;
  int flag;
  int s, b = 0;
  for (int i=1; i<10; i++) {
    for (int j=0; j<10; j++) {
      for (int k=0; k<10; k++) {
        if (i!=j && i!=k && j!=k) {
          flag = 0;
          for (int p=0; p<n; p++) {
            if (num[p][0] == i) s ++;
            if (num[p][1] == j) s ++;
            if (num[p][2] == k) s ++;

            if (num[p][1] == i || num[p][2] == i) b ++;
            if (num[p][0] == i || num[p][2] == j) b ++;
            if (num[p][0] == i || num[p][1] == k) b ++;

            if (strike[p]!=s || ball[p]!=b) flag = 1;
          }
          if (!flag) result ++;
        }
      }
    }
    
  }
  
  printf("%d\n", result);
  return 0;
  

}