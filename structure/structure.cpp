#include <stdio.h>
struct Student{
    char szName[16];
    int age;
};
int main()
{
    int count = 0;
    printf("Structure [Students]\nInput students number:");
    scanf("%d",&count);
    printf("Please input students infomation one by one!\nName Age [Enter]\n");
    Student * list = new Student[count];
    for(int i = 0;i<count;i++){
        scanf("%s %d",list[i].szName,&list[i].age);
    }
    printf("=============[PRINT]==================\n");
    for(int i = 0;i<count;i++)
    {
        printf("%s %d \n",list[i].szName,list[i].age);
    }


    return 0;
}