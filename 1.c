#include<st


int a[5] = { 1,2,3,4,5 }; 
int *ptr = (int*)(&a + 1); 
//1,2,3,4,5
//2,5 *ptr=&a
printf("%d %d", *(a + 1), *(ptr - 1));
