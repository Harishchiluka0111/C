//passing 1d array to function
#include<stdio.h>
void fun(int e[],int);
int main()
{
int a[]={1,2,3,4,5,5};
int n=sizeof a/sizeof a[0];
fun(a,n);
}
void fun(int p[5],int n)
{
printf("%ld",sizeof(p));
	int i;
for(i=0;i<n;i++)
printf(" %d",p[i]);
printf("\n");
}
