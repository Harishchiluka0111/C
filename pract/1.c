#include<stdio.h>
int main()
{	
int v =0Xffffffff;
void *p=&v;
char a = *(char *)p;
printf(" \n%X",a);

short int b = *(short int *)p;
printf(" \n%X",b);

int c = *(int *)p;
printf("\n%X ",c);


	/*
int x = 0xffffffff;
void *p = &x;
char a = (char)*p;
short int b = (short int)*p;
int c = (int)*p;
printf("%x %x %x",a,b,c);
//output:oxff 0xffff 0xffffffff
*/


}


