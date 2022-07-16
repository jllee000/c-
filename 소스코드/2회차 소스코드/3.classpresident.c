#include <stdio.h>
#include <string.h>
//3. class president

int main() {
  // 학생 수는 3~1000, 반은 1~9
  int arr[1000][5] = {0}; // 예를 들어서 학생1의 정보받으면 arr[0][0] = 학생1의 1학년때 반 (행.열)
  int common[1000] ={0}; // 각 학생별 겹치는 횟수 common[0]은 학생1이 지금까지 다른 애들과 겸친 횟수 저장
  
  int stu;
  scanf("%d", &stu); // 학생수 저장

  // 입력 받
  for (int i=0; i<stu; i++) {
    scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1], &arr[i][2], &arr[i][3], &arr[i][4]);
  }

  // 겹치는 횟수 세기
  for (int i=0; i < stu; i++){ // 학생당
    int com = 1;
    for (int grade=0; grade<5; grade++) { // 학년당
      for (int j=0; j < stu; j++) { // 비교대상
        if (i==j) {
          continue;
        }
        if (arr[i][grade] == arr[j][grade]) {
          //i번 학생과 j번 학생의 grade학년때의 반이 같은지
          common[i] ++;
          // 어디서 겹쳐서 세는거 추가되는지 확인용
          // printf("%d학생, %d학년\n", i+1, grade+1);
          break; // 한번이라도 겹치면 그만 세기!!
        }
      }
    }
  }
  //printf("\n각 학생당 반 겹치는 횟수확인용\n");
  //for (int i=0; i<stu; i++)
    //printf("%d\n", common[i]);

  // 누가 젤 common[i] 많은지 확인
  int max = common[0];
  for (int i=0; i<stu; i++) {
    if (common[i] > max)
      max = common[i];
  }
  // 학생 출력
  printf("%d", max+1)
  return 0;
}


