 #include <stdio.h>
int main()
{
     unsigned int a=1;
     unsigned int c=0 -1;
     int b=0;
     while(a !=0){ 
         a=a<<1;
         b=b+1;
     }
     printf("a=%d",b);
     printf("b=%u\n",c);
     return 0;
}
