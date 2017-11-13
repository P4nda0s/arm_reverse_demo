#include <stdio.h>

int main()
{
    int a = 0,b = 0;
    printf("This is condition statements re test!\nPlease input two number:");
    scanf("%d%d",&a,&b);
    if(a + b == 10)
    {
        printf("[if]a+b=10\b");
    }

    if(a > b){
        printf("[if-else-1]a > b\n");
    }else if(a == b){
        printf("[if-else-if] a==b\n");
    }else{
        printf("[if-else] a<b \n");
    }

    if(a > 10)
    {
        if(a <= 20)
        {
            printf("[nest if]\n");
        }
        printf("a > 10\n");
    }    
    return 0;
}