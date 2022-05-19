#inlude<stdio.h>
#include<sys/resource.h>
Main() 
{
Struct rlimit v;
getrlimit(RLIMIT_STACK, &v) ;
printf("%u\n", v. rlim_cur) ;
printf("%u\n", v. rlim_max) ;
}
