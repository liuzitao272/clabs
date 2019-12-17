#include <stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
double a[5];
int m=0;
for(m=0;m<5;m++)
{
     a[m]=atof(argv[m+1]);
}
    int i ;
    double min=a[0];
     for(i=1;i<5;i++)
     {
if(a[i]<min){
min=a[i];
 }
     }
printf("%1.1f",min);
}