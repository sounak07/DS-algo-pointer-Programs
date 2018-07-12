#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int i,n,s;
	printf("Enter the no.=");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		s=s*i;

	}

	printf("%d",s);
	return 0;
}
