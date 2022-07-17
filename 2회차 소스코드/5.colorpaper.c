#include <stdio.h>
#include <string.h>
// 5. colorpaper

int main() {
  int N;
  scanf("%d", &N);
  int arr[101][101] = {0}; // 사각형 별로 정보담기 (위치, 너비, 높이, 넓이까지!)
  int area[100] = {0}; //넓이들 저장
  int x,y,z,r;
  for (int k=0; k<N; k++) {
    scanf("%d %d %d %d", &x, &y, &z, &r ); 
    // 영역표시
    for (int i = x; i < x+z; i ++)
      for (int j = y; j < y+r; j++) {
        arr[i][j] = k+1;
      }
  }
  // 영역 해당되는거 개수 세기
  for (int i=0; i<101; i++) {
    for (int j=0; j<101; j++) {
      for (int k=0; k<N; k++) {
        if (arr[i][j] == k+1)
          area[k] ++;   
      }
    }
  } 
  for (int k=0; k<N; k++) 
    printf("%d\n", area[k]);
  
  return 0;
}
