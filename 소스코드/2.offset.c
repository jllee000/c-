#include <stdio.h>
#include <string.h>
//2. offset
int main() {
  int arr[5][5] = {0};
  // 입력받기
  for (int i=0; i<5; i++) {
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
  }
  // 조건따라 요소를 *로 변경해서 저장해보려고 했으나
  // 배열요소가 int 형식이여서 애매,,-> 걍 출력할때 해버리자
  int main;
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      arr[-1][j] = 10;
      arr[i][-1] = 10;
      main = arr[i][j];
      if (main < arr[i+1][j] && main < arr[i-1][j] && main < arr[i][j-1] && main < arr[i][j+1]) {
        printf("* ");
      }
      else
        printf("%d ", main);
    }
    printf("\n");
  }
  return 0;
} 