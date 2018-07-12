#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int f1=0,f2=1,f3,n,i;

	printf("Enter The number=");
	scanf("%d",&n);

	printf("%d%d",f1,f2);

	for(i=2;i<n;i++)
	{
		printf("%d%d",f1,f2);
		f3=f1+f2;
		f2=f3;
		f2=f1;
		printf("%d",f3);

	}



	return 0;
}
