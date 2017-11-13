#include <stdio.h>

int main()
{
    int start,step,sum = 0,end;
    printf("Loop Test \nPlease input start and step:");
    scanf("%d%d",&start,&step);
    printf("This is `for`\n");
    end = step + start;
    for(int i = start;i < step;i++){
        sum = sum + i;
    }
    printf("Result is :%d\n",sum);

    printf("This is `while`\n");
    sum = 0;
    int i = start;
    while(i < end){
        sum = sum + i;
        i++;
    };
    printf("Result is :%d\n",sum);

    printf("This 'do-while'\n");
    sum = 0,i = 0;
    do{
        sum = sum + i;
        i ++ ;
    }while(i < end);
    printf("Result is :%d\n",sum);
    return 0;
}