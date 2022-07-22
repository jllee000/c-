#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//5. 문자열 압축

int main() {
  char alpha[1000] = "";
  int cnt[26] ={0}; // 각 26개의 알파벳별 개수 (cnt[0]은 A의 개수 저장)
  fgets(alpha,1000,stdin);
  int len = strlen(alpha)-1;
  for (int i=0; i<len; i++) {
    for (int j=0; j<26; j++) {
      if (alpha[i] == j+65) // 아스키코드 이용
        cnt[j] ++;
    }
  }
  for (int i=0; i<26; i++)
    if (cnt[i] != 0) // 개수 없는 건 출력 안함
      printf("%d%c", cnt[i], i+65);
  return 0;
}

