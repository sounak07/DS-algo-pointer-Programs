#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int n,i,j,c,k=1,a;
	printf("Enter the no. of rows:");
	scanf("%d",&n);
	printf("Enter the no. of triangles");
	scanf("%d",&c);

	for(a=1;a<=c;a++){

		for(i=0;i<=n;i++){
		for(j=k;j<=i+k;j++)
			{
				printf("*");

			}

		printf("\n");

	}
		k=k+n;
	}
	return 0;
}
