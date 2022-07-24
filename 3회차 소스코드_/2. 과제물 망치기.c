#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//2. 과제물 망치기

int main() {
  char real[100000] = ""; // 원본
  char fake[100000] = ""; // 띄어쓰기뺌
  fgets(real,100000,stdin); 
  int len = strlen(real);
  for (int i=0; i<len; i++) {
    if (real[i] != ' ') {
      fake[i] = real[i];
      printf("%c", fake[i]);//바로출력
    }
    // 요 위치와의 차이점..?       
    // printf("%c", fake[i]);
  }
  
  return 0;
}
