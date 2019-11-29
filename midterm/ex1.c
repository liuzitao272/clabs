#include <stdio.h>
int main()
{
    char c;
    int count=0,word=0;
    while((c=getchar())!='\n')
        if(c==' ')
            word=0;
        else if(word==0)
        {
            word=1;
            count++;
        }
    printf("The number of words is %d\n",count);
    return 0;
    }

