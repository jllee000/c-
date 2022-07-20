#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//1. 대소문자 변환

int main() {
  char alpha[1000] = "";
  gets(alpha);
  int len = strlen(alpha);
  
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