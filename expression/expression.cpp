#include <stdio.h>

int main()
{
    int a=0,b=0;
    printf("Expression Test \nInput two number:");
    scanf("%d%d",&a,&b);
    printf("a + b = %d",a+b);
    printf("a - b = %d",a-b);
    printf("a * b = %d",a*b);
    printf("a / b = %d",a/b);
    printf("a ^ b = %d",a ^ b);
    printf("a | b = %d",a | b);
    printf("a>10 && b<20  : %d",a>10 && b<20);
    printf("a>10 || b<20  : %d",a>10 || b<20);
    printf("!a ：%d",!a);

    return 0;
}