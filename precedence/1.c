#include<stdio.h>
int main()
{
int a=8,b=4,c=2,d=1,e=5,f=20,g;
g=a+b-(c+d)*3%e+f/9;
//      1   2 3   4
// 5        6     7
printf("%d",g);

return 0;
}
