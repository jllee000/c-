//8. bingo

int main() {
  int arr[5][5] = {0};
  int game[5][5] = {0};
  int request = 0;
  int cntcross1, cntcross2, cntrow, cntcol = 0;
  int num, bingo = 0;
  for (int i=0; i<5; i++) {
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
  }
  
  // 사회자
  for (int i=0; i<5; i++) {
    scanf("%d %d %d %d %d", &game[i][0], &game[i][1], &game[i][2], &game[i][3], &game[i][4]);
  }

  

  // 찾기
  for (int k=0; k<5; k++) {
    for (int r=0; r<5; r++) { // 빙고판 탐색하면서
      for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) { // 사회자 번호
          if (arr[i][j] == game[k][r]) { 
            arr[i][j] = 0; // 일치하면, 그 자리는 0으로 변환
          for (int h=0; h<5; h++) { // 한행마다! (가로줄)
            for (int s=0; s<5; s++) {  
              if (arr[h][s] == 0) 
                cntrow ++;
                //num = (i+1)*5 + (j+1); // 몇번째 숫자에서?
        }
        if (cntrow == 5) 
          bingo ++; // 빙고개수
      }
          }
        }
      }
      
        
      for (int i=0; i<5; i++) { // 한열마다! (세로줄)
        for (int j=0; j<5; j++) {  
          if (arr[j][i] == 0) 
            cntcol ++;
            //num = (i+1)*5 + (j+1); // 몇번째 숫자에서?
        }
        if (cntcol == 5)
          bingo ++; // 빙고개수
      }
  
      for (int i=0; i<5; i++) {  
        if (arr[i][i] == 0) {
          cntcross1 ++;
          //num = (i+1)*5 + (j+1);
        } 
      }
      if (cntcross1 == 5) 
        bingo ++;

      for (int i=0; i<5; i++) { 
        if (arr[i][4-i] == 0) {
        cntcross2 ++;
        //num = (i+1)*5 + (j+1);
        }  
      }
      if (cntcross2 == 5) 
        bingo ++;  

      if (bingo == 3)
        printf("끝!\n");

      printf("%d %d %d %d\n", cntrow, cntcol, cntcross1, cntcross2);
      printf("%d\n", bingo);
    }
  }  


  printf("\n\n");
  for (int i=0; i<5; i++) { 
    for (int j=0; j<5; j++) 
      printf("%d ", arr[i][j]);
    printf("\n");
  }
  
  // 각 열.행 빙고개수 세기

  
  
  printf("%d %d %d %d\n", cntrow, cntcol, cntcross1, cntcross2);
  printf("%d\n", bingo);
  return 0;

}
