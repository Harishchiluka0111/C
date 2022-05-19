#include<stdio.h>

void fun(double d[],int *i,char c[5])
{


printf("%u\n",sizeof(d));
printf("%u\n",sizeof(i));
printf("%u\n",sizeof(c));
}
int main()
{

double d_ar[5]={1.2,3.55,45.43};
int i_ar[5]={1,2,3,4};
char c_ar[5]={'a','s','s','d','f'};

printf("%u\n",sizeof(d_ar));
printf("%u\n",sizeof(i_ar));
printf("%u\n",sizeof(c_ar));

fun(d_ar,i_ar,c_ar);

}
