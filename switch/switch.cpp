#include <stdio.h>
int main ()
{
    int user_in = 0;
    
    printf("You can input a number:");
    scanf("%d",&user_in);
    printf("The number is : %d\n",user_in);

    switch(user_in){
        case 4:
            printf("4 boys.\n");
            break;
        case 5:
            printf("5 girls.\n");
            break;
        case 6:
            printf("6 girls.\n");
            break;
        case 7:
            printf("7 girls.\n");
            break;
        default:
            printf("Haha \n");
        };

    
    printf("below is switch2 \n");
    switch(user_in)
    {
        case 1:
            printf("*1 boys.\n");
            break;
        case 10:
            printf("*10 boys.\n");
            break;
        case 30:
            printf("*30 girls \n");
            break;
        case 45:
            printf("*45 boys.\n");
            break;
        default:
            printf("NNNN \n");
    }
    

    return 0;
}