#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//3. 문자열 뒤집기

int main() {
  char alpha[1000] = "";
  fgets(alpha,1000,stdin);
  int len = strlen(alpha);
  for (int i=len; i>0; i--) {
    printf("%c", alpha[i-1]);
  }
  return 0;
}
