#include <stdio.h>

#define PI 3.14 // 기호함수 정의
struct Circle {
 int x, y;
 float r, area;
};
typedef struct Circle CIR; // 타입명을 재정의, 별칭
CIR circle_size(CIR c); // 함수선언
CIR circle_move(CIR c);
void main()
{
 CIR c;
// const float PI = 3.1415
 // c 구조체 변수의 중심좌표와 반지름 입력
printf("원의 좌표: "); scanf("%d %d", &c.x, &c.y);
printf("원의 반지름: "); scanf("%f", &c.r);
 // 면적 게산해서 출력
 c = circle_size(c);
 printf("원의 면적 = %f \n", c.area);
 c = circle_move(c);
 printf("원의 새위치 = (%d,%d) \n", c.x, c.y);
}
CIR circle_size(CIR c)
{
 c.area = c.r * c.r * PI;
 return c;
}
CIR circle_move(CIR c)
{
 int a, b;
 printf("xy이동할 거리: "); scanf("%d %d", &a, &b);
 c.x += a; c.y += b;
 return c;
}

