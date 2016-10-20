#include <stdio.h>
enum carsize {S,M,L};
struct car {
    char no[10];
    int eh, em;
    int oh, om;
    enum carsize size;
};
typedef struct car _car;
void parking(_car *c); // 차가 주차장에 들어올 때
void leaving(); // 나갈 때
void show(); // 주차한 차 정보 출력
void main()
{
    _car c; // 자동차 구조체 변수
    parking(&c);
    show(&c);
    leaving(&c);
}
void parking(_car *c)
{
    // 차량번호, 입차시간, 종류 입력받기
    printf("차량번호 : "); scanf("%s",c->no);
    printf("입차시간 : ");
    scanf("%d %d", &c->eh, &c->em);
    printf("종류(0.소형,1.중형,2.대형) : ");
    scanf("%d", &c->size);
}
void show(_car *c)
{
    // 25나5663 / 10:30 IN / 중형
    printf("%s / %d:%d IN / ",c->no,c->eh,c->em);
    switch(c->size) {
        case S: printf("소형 \n"); break;
        case M: printf("중형 \n"); break;
        case L: printf("대형 \n"); break;
    }
}
void leaving(_car *c)
{
    int min, amt;
    // 출차시간 입력
    printf("출차시간 : ");
    scanf("%d %d",&c->oh, &c->om);
    // 주차한 총 시간(분)으로 계산
    if(c->om >= c->em){ //10:30 IN -> 12:43 OUT
        min = (c->oh - c->eh) * 60 + (c->om - c->em);
    }
    else { // 10:30 IN -> 12:15 OUT
        min = (c->oh - c->eh - 1) * 60;
        min += (c->om + 60 - c->em);
    }
    // 주차요금 계산
    switch(c->size) {
        case S: amt = 1000; break;
        case M: amt = 1700; break;
        case L: amt = 2500; break;
    }
    if(min % 10 > 0){
        min = min / 10 + 1;
    }
    else min /= 10;
    amt = amt * min;
    printf("주차요금(%d분) = %d \n", min*10, amt);
}
