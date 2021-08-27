// Unions

#include<stdio.h>
typedef struct POINT1
{
    int x;
    int y;
}POINT1;
typedef union POINT2
{
    int x, y;
}POINT2;
int main()
{
    POINT1 p1={2,3};
    // POINT2 p2 = {4,5};
    POINT2 p2;
    p2.x = 4;
    p2.y = 5;
    printf("\n the coordinate value of p1 are %d and %d", p1.x , p1.y);
    printf("\n the coordinate value of p2 are %d and %d", p2.x , p2.y);
}
