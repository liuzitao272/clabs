#include  <stdio.h>
 int main( )
{
unsigned  long int a=1;
unsigned long int b=0;
unsigned  long int c=0-1;
while(a>b)
{
b=b+1;
  a=a<<1;
}

 printf("unsigned long int is size of%ldbit\n",b);
printf("The max is%lu,the min is-18446744073709551616\n",c);
  return 0;
}