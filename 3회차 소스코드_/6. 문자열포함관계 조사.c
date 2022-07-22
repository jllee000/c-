#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>
//6. 문자열 포함관계 조사

int main() {
  char alpha[1000] = "";
  char compare[1000] = "";
  fgets(alpha,1000,stdin);
  fgets(compare,1000,stdin);
  int result = 0;
  int len1 = strlen(alpha)-1;
  int len2 = strlen(compare)-1;
  
  for (int i=0; i<len1; i++) {
    if (alpha[i] == compare[0]) //첫글자부터
    {
      for (int k=0; k<len2; k++) {
        if (alpha[i+k] == compare[k]) //끝까지!
          result = 1;
        else result = 0; //끝까지 같아야함
      }
    }
    
  }
  if (result == 1) printf("YES");
  else printf("NO");
  return 0;
}
