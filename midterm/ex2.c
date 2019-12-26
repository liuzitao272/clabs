#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
int a[100];
int m=1;
int x=0;
for(m=1;m<argc;m++,x++)
{
     a[x]=atof(argv[m]);
}
    int i ;
    int max=a[0];
     for(i=1;i<argc;i++)
     {
if(a[i]>max){
max=a[i];
 }
     }
printf("%d\n",max);
}