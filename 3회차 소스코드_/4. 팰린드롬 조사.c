#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//4. 팰린드롬 조사

int main() {
  char alpha[1000] = "";
  fgets(alpha,1000,stdin);
  int len = strlen(alpha)-1;
  int check = 0;
  // 홀수냐 짝수냐에 따라 다른듯?
  if (len % 2 == 0) { //짝수일때
    for (int i=0; i<=len/2; i++) {
      if (alpha[i] == alpha[len-i-1]) {
          check = 1;
      }
      else check = 0; 
    }
  }
  else if (len % 2 != 0) { //홀수일때
    if (len == 1)
      check = 1;
    else {
      for (int i=0; i<=len/2; i++) {
        if (i != len-1-i) { // 중간 것이 아닐때
          if (alpha[i] == alpha[len-i-1]) {
            check = 1;
          }
          else check = 0;
        }
      }
    }
  }
  else check = 0;

  if (check == 1) printf("YES");
  else printf("NO");
  return 0;
}
