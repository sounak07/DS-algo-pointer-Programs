#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b,c;
	printf("Enter the ages of A,B,C");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b &&a>c)
	{
		if(b>c)
		 printf("Smallest is C=%d",c);
		else
		 printf("Smallest is B=%d",b);	
	}
	else
		printf("Smallest is A=%d",a);
		
		
	return 0;
}

