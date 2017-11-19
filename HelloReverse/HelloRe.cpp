#include <stdio.h>
void EncryptTEA(unsigned long *firstChunk, unsigned long *secondChunk, unsigned long* key)
{
    unsigned long y = *firstChunk;
    unsigned long z = *secondChunk;
    unsigned long sum = 0;

    unsigned long delta = 0x9e3779b9;

    for (int i = 0; i < 8; i++)//8轮运算(需要对应下面的解密核心函数的轮数一样)
    {
        sum += delta;
        y += ((z << 4) + key[0]) ^ (z + sum) ^ ((z >> 5) + key[1]);
        z += ((y << 4) + key[2]) ^ (y + sum) ^ ((y >> 5) + key[3]);
    }

    *firstChunk = y;
    *secondChunk = z;
}
int main ()
{
    int user_in = 0;
    EncryptTEA(NULL,NULL,NULL);
    printf("Hello world \n You can input a number:");
    scanf("%d",&user_in);
    printf("The number is : %d\n",user_in);
    return 0;
}