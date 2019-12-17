 #include <stdio.h>
 char getch(int number,int *recorder[]);
void ungetch(int unumber,int *urecorder[],char ubeforeinput);
void calulate(char input,int cnumber,int *crecorder[]);
 int main(int argc,int *argv[]){
 	char c;
 	int nowinput;
 	while((nowinput=getch(argc,*argv[]))!='\0'){
 		calulate(nowinput,argc,*argv[]);
 		nowinput=getch(argc,*argv[]);
 		if((c=getch(argc,*argv[]))=='\0'){
 			ungetch(argc,*argv[],nowinput);
 			break;
 		}else{
 			ungetch(argc,*argv[],c);
 			ungetch(argc,*argv[],nowinput);
 		}
 	}
	 printf("the answer is%d\n",getch(argc,*argv[]));
	 return 0;
 	
 }
 static int i=0,j=-1;
 char getch(int number,int *recorder[]){
 	char m;
 	recorder++;
 	if(number==1){
 		return (*recorder)[i--];
 		recorder--;
 	}else{
 		
 		m=(*++recorder)[j--];
		 recorder=recorder-2;
		 return m;
 	}	
 }
 void ungetch(int unumber,int *urecorder[],char ubeforeinput){
 	number=2;
 	urecorder++;
 	(*urecorder++)[++j]=beforinput;
 }
 
 void calulate(char input,int cnumber,int *crecorder[]){
 	
 	void realcalulate(char input);
 	
 	if(!isdigit(input)){
 		realcalulate(input)
 		}
 	else{
 		ungetch(input);
 		int temp;
 		crecorder++;
 		while(isdigit(temp=*crecorder[i++])){
 			ungetch(crecorder,*crecorder[],temp);
 		}
 		i--;
		realcalulate(temp);	
		crecorder--;
 	}
	  
 }
void realcalulate(char c){
	char getch(int number,int *recorder[]);
	char op1,op2;
	switch(c){
 			case *:
 				ungetch(getch()*getch());
 				break;
 			case +:
 				ungetch(getch()+getch());
 				break;
 			case -:
 				op2=getch();
 				op1=getch();
 				ungetch(op1-op2);
 				break;
 			case /:
 				op2=getch();
 				op1=getch();
 				if(op2!=0){
 					ungetch(op1/op2);
 				}else{
 					printf("cann't divide 0\n");
 				}
 				break;
 			default:
 				printf("there is other  signal\n");
 				break;
 	}
}
