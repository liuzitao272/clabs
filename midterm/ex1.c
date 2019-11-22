#include <stido.h>
#define IN  1  /* 在单词内*/
#define OUT 0 /*在单词外*/
main()
{
    char ch[50];
    printf("please input any alphanumeric length not exceeding 50 characters");
     int i,nw,state;
     state=OUT;
     nw=0;
     getchar(ch);
     while(ch[i]!="\0"){
         ++i;
         if(ch[i]==''||ch[i]=='/n'||ch[]=='\t')
         state=OUT;
         else if(state==OUT){
             state=IN;
             ++nw;
         }
     }
     printf("the number of word is=%d",nw);
} 

