#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int y;
	
	printf("Enter The Year=");
	scanf("%d",&y);
	
	if(y%400 == 0 && y%100 == 0 || y%4 == 0)
		printf("Leap Year");
	else
		printf("Sorry Not a Leap Year");	
	return 0;
}
