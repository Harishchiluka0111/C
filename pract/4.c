#include<stdio.h>
#define SET_BIT(bit_pos, number) (number|(1<<bit_pos))


int main()
{
printf("%d",SET_BIT(1, 0x10));// 00010000 | 00000010

//0x10|(1<<1);
}
