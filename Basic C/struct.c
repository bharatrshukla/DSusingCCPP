#include<stdio.h>
struct Rectangle
{
    int length;
    int breadth;
};


int main()
{
    /*Declaration*/
    struct Rectangle r;
    /*Declaration + Initilization*/
    struct Rectangle r1= {10,5};
    printf("Length is %d\n",r1.length);
    printf("Breadth is %d\n", r1.breadth);

    r1.length = 30;
    r1.breadth = 100;
    printf("Area of Rectangle is %d",r1.length*r1.breadth);
}
