#include<stdio.h>
#include<string.h>

/*
int main()
{
int i,a;
char s1[10],s[]="harish";
a=strlen(s);
for(i=0;a>0;a--,i++)
{
s1[i]=s[a-1];
}
s1[a]='\0';

printf("\n%s\n",s1);
return 0;
}
*/

int main()
{
int I,a;
char t,s[]="harish";

a=strlen(s);	
for(I=0, a=a-1;I<a;I++, a--) 
{
t=s[I];
s[I]=s[a];
s[a]=t;
}

printf("%s",s);
}
