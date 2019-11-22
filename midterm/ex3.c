#include<stdio.h>
#define MAX 64
int main()
{
	
    int c,n;
    while (c=getchar() != EOF)
    {
        int a[MAX];
        a[1] = 1;	
        int p = 1;  
        unsigned long long int one = 0;  
        unsigned long long int i,j;
        unsigned long long int s = 1;
        for (i=2;i<=n;i++)
            s *= i;
        printf("%llu\n",s);  
        for (i=2;i<=n;i++)  
        {
            for (j=1;j<=p;j++) 
            {
                int temp = a[j] * i + one;  
                one = temp / 10;    
                a[j] = temp % 10;  
            }

            while(one) 
            {
                a[j] = one % 10;
                one = one / 10;
                j++;   
            }
            p = j - 1; 
        }
        for (i=p;i>=1;i--)  
            printf("%llu",a[i]);
    }
}