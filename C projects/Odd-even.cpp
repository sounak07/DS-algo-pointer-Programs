#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int s;
	
	printf("Enter the no.");
	scanf("%d",&s);
	
	if(s%2==0)
		printf("Even");
	else 
		printf("Odd");	
	return 0;
}

