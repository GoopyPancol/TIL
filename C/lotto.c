#include <stdio.h>
#include <stdlib.h> // qsort �Լ�, malloc �Լ�
void start();
void save();
void show();
void delete();  // ����
struct lotto {
  int seq;
  int lno[6];
};
typedef struct lotto _lotto;
_lotto **gl; // �ζ� ����ü ����(����)
int s, loc=0;   // �ζ� ����ü�� ũ��(����), ��ġ
int comp(const void *a, const void *b)
{ // ���� �ΰ� �Է¹޾Ƽ� ���� ��� �� ��ȯ
  return *(int *)a - *(int *)b;
}
int menu()
{
  int c;
  printf("1. ��� \n");
  printf("2. ���� \n");
  printf("3. ��� \n");
  printf("0. ���� \n");
  printf("���� : "); scanf("%d", &c);
  return c;
}
int main()
{ int i, c;
  start(); // �޸��Ҵ�
  while(1) {
    c = menu();
    switch(c) {
      case 1: save(); break; // ��÷��ȣ ���
      case 2: delete(); break;
      case 3: for(i=0;i<loc;i++) show(i);  // ��÷��ȣ ���
              break;
      case 0: return 0;
    } // switch
  } // while
  free(gl); // �޸� ����
}
void start()
{
  printf("**** �ζǴ�÷��ȣ �м��� **** \n");
  printf("�� ȸ�� ? "); scanf("%d", &s);
  //gl = (_lotto **)malloc(sizeof(_lotto *) * s); // lotto ������ �迭
  gl = (_lotto **)calloc(s, sizeof(_lotto *));
}
void save()
{
  int i;
  gl[loc] = (_lotto *)malloc(sizeof(_lotto)); // ����ü 1�� ����
  printf("ȸ�� : "); scanf("%d",&gl[loc]->seq);
  printf("��÷��ȣ : ");
  for(i=0; i<6; i++) scanf("%d",&gl[loc]->lno[i]);
  qsort(gl[loc]->lno, 6, sizeof(int), comp); // Quick ����
  loc++;
  printf("\n");
}
void show(int k)
{
  int i;
  if(gl[k] != NULL) {
    printf("%dȸ�� : ", gl[k]->seq);
    for(i=0; i<6; i++) printf("%d ",gl[k]->lno[i]);
    printf("\n");
  }
}
void delete()
{
  int k;
  printf("������ ȸ�� : "); scanf("%d", &k);
  if(gl[k-1] != NULL) {  // �޸� �Ҵ�Ǿ� ������
    free(gl[k-1]);  // �޸� ����
    gl[k-1] = NULL; // �ּ� ����
  }
}
