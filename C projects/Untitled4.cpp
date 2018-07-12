
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	
	int i,j,n=4;
	//printf("Enter the no.:");
	//scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			{
				if(j==1)
				 printf("%d",i);
				else
				 printf("%d",i+n-1);
				 n--;
				
			}
			n=4;
			
			
		printf("\n");	
	}
	return 0;
}
