#include <stdio.h>
#include <string.h>
// 4. attrackrange

int main() {
  int arr[100][100] = {0};
  int N;
  scanf("%d", &N);
  int x, y, Z;
  scanf("%d %d %d", &x, &y,&Z);
  int X = x-1;
  int Y = y-1;
  // 방법1) x표 기준으로 x축, y축 숫자 대입
  // 만약에 R이 3이면, arr[X][Y] 기준으로 증감
  // arr[X][Y-1-3],arr[X][Y-1-2],arr[X][Y-1-1]
  // arr[X-1-3][Y], arr[X-1-2][Y], arr[X-1-2][Y]
  ///.....

  // 방법2) 거리로도 할수 있
  // x표 기준으로 x,y축 떨어진 거리만큼 숫자 세짐
  int sum;
  int xnum, ynum;
  // 순차적으로 돌기
  for (int i = 0; i<N+2; i++) {
    for (int j = 0; j<N+2; j++) {
      if (i>x)
        xnum = i-1-x;
      else 
        xnum = x+1-i;

      if (j>y)
        ynum = j-1-y;
      else
        ynum = y+1-j;

      sum = xnum + ynum;
      
      if (sum <= Z)
        arr[i-2][j-2] = sum;
        
    }
  }

  for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
      if(i==X && j==Y){
        printf("x ");
      }
      else{
        printf("%d ",arr[i][j]);
      }
    }
    printf("\n");
  }

  return 0;
}


