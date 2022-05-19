#include<stdio.h>
int main()
{

int a[][2] = {1,2,3,4,5,6};  

printf("%d",*(*(a+1)+2));
// 1 2 
// 3 4  a is pointing to 3(a[1]) + 2*(sizeof int)
// 5 6                      1000 + 8 =1008(5 elem)
}
