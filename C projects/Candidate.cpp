#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,t,b,c,s;
	printf("Enter the Marks of Maths,Physics,Chemistry:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>=60 && b>=50 && c>=40)
	{
		s=a+b+c;
		t=a+b;
		if(s>=200)
		 printf("Eligible Candidate");
		else if(t>=150)
		 printf("Eligible Candidate");
		else
		 printf("Not Eligible");	
	}
	else
		printf("Not Eligible");
		
		
	return 0;
}

