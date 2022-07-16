#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
// 7. 행렬 뒤집기

int main() { 
  int arr[10][10] = {FALSE};
  int N;
  scanf("%d", &N);
  
  for (int i=0; i<N; i++) {
    for(int j=0; j<10; j++) {
      // n열 변경
      if(arr[i][j] == TRUE)
        arr[i][j] = FALSE;
      else if (arr[i][j] == FALSE)
        arr[i][j] = TRUE;
      // n행 변경
      if(arr[j][i] == TRUE)
        arr[j][i] = FALSE;
      else if (arr[j][i] == FALSE)
        arr[j][i] = TRUE;
    }
    arr[i][i] = TRUE; //이때 대각선은 항상 1
  }
  
  for (int i=0; i<10; i++) {
    for (int j=0; j<10; j++)
      printf("%d ", arr[i][j]);
    printf("\n");
  }
  return 0;
}