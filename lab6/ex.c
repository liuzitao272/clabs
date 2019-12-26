 	#include<stdio.h>
 	int zmy(int n){
 	    if(n%4==0&&n%100!=0||n%400==0)return 0;
	    else return 1;
	}
 	int main()
 	{
 	    int i,t,s=0;
 	   struct Date {
 	     int year;
	     int month;
 	     int day;
 	    }y1,y2,y3;
 	    scanf("%d%d%d",&y1.year,&y1.month,&y1.day);
 	    scanf("%d%d%d",&y2.year,&y2.month,&y2.day);
 	    if(zmy(y1.year)==0){
 	        switch(y1.month-1)
 	    {
 	        case 1:y3.day=31;break;
 	        case 2:y3.day=31+29;break;
 	        case 3:y3.day=31+29+31;break;
 	        case 4:y3.day=31+29+31+30;break;
 	        case 5:y3.day=31+29+31+30+31;break;
 	        case 6:y3.day=31+29+31+30+31+30;break;
	        case 7:y3.day=31+29+31+30+31+30+31;break;
 	        case 8:y3.day=31+29+31+30+31+30+31+31;break;
 	        case 9:y3.day=31+29+31+30+31+30+31+31+30;break;
 	        case 10:y3.day=31+29+31+30+31+30+31+31+30+31;break;
 	        case 11:y3.day=31+29+31+30+31+30+31+31+30+31+30;break;
 	        case 12:y3.day=31+29+31+30+31+30+31+31+30+31+30+31;break;
 	    }y1.day=y3.day+y1.day;}
 	    else {
 	    switch(y1.month-1)
	    {
 	        case 1:y3.day=31;break;
 	        case 2:y3.day=31+28;break;
 	        case 3:y3.day=31+28+31;break;
 	        case 4:y3.day=31+28+31+30;break;
 	        case 5:y3.day=31+28+31+30+31;break;
 	        case 6:y3.day=31+28+31+30+31+30;break;
 	        case 7:y3.day=31+28+31+30+31+30+31;break;
 	        case 8:y3.day=31+28+31+30+31+30+31+31;break;
 	        case 9:y3.day=31+28+31+30+31+30+31+31+30;break;
 	        case 10:y3.day=31+28+31+30+31+30+31+31+30+31;break;
 	        case 11:y3.day=31+28+31+30+31+30+31+31+30+31+30;break;
	        case 12:y3.day=31+28+31+30+31+30+31+31+30+31+30+31;break;
 	    }y1.day=y3.day+y1.day;}
 	
 	    for(;y1.year<y2.year;y1.year++)
 	    {
	    if(zmy(y1.year)==0)s=s+366;
 	else s=s+365;}
	s=s-y1.day;
 	if(zmy(y2.year)==0){
	        switch(y2.month-1)
	    {
 	        case 1:y3.day=31;break;
 	        case 2:y3.day=31+29;break;
 	        case 3:y3.day=31+29+31;break;
 	        case 4:y3.day=31+29+31+30;break;
 	        case 5:y3.day=31+29+31+30+31;break;
 	        case 6:y3.day=31+29+31+30+31+30;break;
 	        case 7:y3.day=31+29+31+30+31+30+31;break;
 	        case 8:y3.day=31+29+31+30+31+30+31+31;break;
 	        case 9:y3.day=31+29+31+30+31+30+31+31+30;break;
 	        case 10:y3.day=31+29+31+30+31+30+31+31+30+31;break;
 	        case 11:y3.day=31+29+31+30+31+30+31+31+30+31+30;break;
 	        case 12:y3.day=31+29+31+30+31+30+31+31+30+31+30+31;break;
 	    }y2.day=y3.day+y2.day;}
 	    else {
 	    switch(y2.month-1)
 	    {
 	        case 1:y3.day=31;break;
 	        case 2:y3.day=31+28;break;
 	        case 3:y3.day=31+28+31;break;
 	        case 4:y3.day=31+28+31+30;break;
 	        case 5:y3.day=31+28+31+30+31;break;
 	        case 6:y3.day=31+28+31+30+31+30;break;
 	        case 7:y3.day=31+28+31+30+31+30+31;break;
 	        case 8:y3.day=31+28+31+30+31+30+31+31;break;
 	        case 9:y3.day=31+28+31+30+31+30+31+31+30;break;
 	        case 10:y3.day=31+28+31+30+31+30+31+31+30+31;break;
 	        case 11:y3.day=31+28+31+30+31+30+31+31+30+31+30;break;
 	        case 12:y3.day=31+28+31+30+31+30+31+31+30+31+30+31;break;
 	    }y2.day=y3.day+y2.day;}
 	    s+=y2.day;
 	    printf("%d",s);
 	    return 0;
 }
	
