#include <stdio.h>
#include <stdlib.h> // qsort 함수, malloc 함수
void start();
void save();
void show();
void delete();  // 삭제
struct lotto {
  int seq;
  int lno[6];
};
typedef struct lotto _lotto;
_lotto **gl; // 로또 구조체 변수(전역)
int s, loc=0;   // 로또 구조체의 크기(갯수), 위치
int comp(const void *a, const void *b)
{ // 정수 두개 입력받아서 빼기 계산 후 반환
  return *(int *)a - *(int *)b;
}
int menu()
{
  int c;
  printf("1. 등록 \n");
  printf("2. 삭제 \n");
  printf("3. 출력 \n");
  printf("0. 종료 \n");
  printf("선택 : "); scanf("%d", &c);
  return c;
}
int main()
{ int i, c;
  start(); // 메모리할당
  while(1) {
    c = menu();
    switch(c) {
      case 1: save(); break; // 당첨번호 등록
      case 2: delete(); break;
      case 3: for(i=0;i<loc;i++) show(i);  // 당첨번호 출력
              break;
      case 0: return 0;
    } // switch
  } // while
  free(gl); // 메모리 해제
}
void start()
{
  printf("**** 로또당첨번호 분석기 **** \n");
  printf("몇 회차 ? "); scanf("%d", &s);
  //gl = (_lotto **)malloc(sizeof(_lotto *) * s); // lotto 포인터 배열
  gl = (_lotto **)calloc(s, sizeof(_lotto *));
}
void save()
{
  int i;
  gl[loc] = (_lotto *)malloc(sizeof(_lotto)); // 구조체 1개 생성
  printf("회차 : "); scanf("%d",&gl[loc]->seq);
  printf("당첨번호 : ");
  for(i=0; i<6; i++) scanf("%d",&gl[loc]->lno[i]);
  qsort(gl[loc]->lno, 6, sizeof(int), comp); // Quick 정렬
  loc++;
  printf("\n");
}
void show(int k)
{
  int i;
  if(gl[k] != NULL) {
    printf("%d회차 : ", gl[k]->seq);
    for(i=0; i<6; i++) printf("%d ",gl[k]->lno[i]);
    printf("\n");
  }
}
void delete()
{
  int k;
  printf("삭제할 회차 : "); scanf("%d", &k);
  if(gl[k-1] != NULL) {  // 메모리 할당되어 있으면
    free(gl[k-1]);  // 메모리 삭제
    gl[k-1] = NULL; // 주소 지움
  }
}
