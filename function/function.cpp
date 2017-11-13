#include <stdio.h>

int function()
{
    printf("None paramters\n");
    return 1;
}

int function2(int a,int b)
{
    printf("two,a+b=%d\n",a+b);
    return a+b;
}

int funciotn4(int a,int b,int c,int d,int e)
{
    printf("a+b+c+d+e = %d\n",a+b+c+d+e);
    return a+b+c+d+e;
}

int main()
{
    int a,b,c,d,e;
    printf("Function Test \nInput 3 numbres:\n");
    scanf("%d%d%d",&a,&b,&c);
    c = function();
    d = function2(a,b);
    e = c + d;
    funciotn4(a,b,c,d,e);
    
    return 0;
}