#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i,j,s=10;
	printf("Enter the no.:");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		for(j=0;j<=n-i-1;j++){
			
			printf("*");
		}
		
		printf("\n");	
	}
	return 0;
}
