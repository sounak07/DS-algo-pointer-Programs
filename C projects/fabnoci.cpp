#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int j=1,i=1,f,n,k;

	printf("Enter The number=");
	scanf("%d",&n);

	printf("%d\t%d",i,j);

	for(k=2;k<n;k++)
	{
		f=i+j;
		i=j;
		j=f;
		printf("\t%d",f);

	}



	return 0;
}
