#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	printf("Enter The No. of digits");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		if(i%7!=0)
			printf("%d",i);
			printf("\n");
	}
	
	return 0;
}

