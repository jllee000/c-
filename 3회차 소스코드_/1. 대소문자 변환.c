#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//1. 대소문자 변환

int main() {
  char alpha[1000] = "";
  fgets(alpha,1000,stdin);
  int len = strlen(alpha)-1;
  
  for (int i=0; i<len; i++) {
    if ((alpha[i] >= 'a') && (alpha[i] <= 'z')) {
      alpha[i] -= 32;
    }
    else if ((alpha[i] >= 'A') && (alpha[i] <= 'Z')) {
      alpha[i] += 32;
    }
    printf("%c", alpha[i]);
  }
  return 0;
}
