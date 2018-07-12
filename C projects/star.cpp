#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i,j,s=1;
	printf("Enter the no.:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=2*n-1;j++)
			{
				if(j>=n+1-i && j<=n+i-1)
					printf("%d",s++);
				else
					printf(" ");	
			}
			s=1;
		printf("\n");	
	}
	return 0;
}
