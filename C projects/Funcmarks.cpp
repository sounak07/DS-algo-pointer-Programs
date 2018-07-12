#include <stdlib.h>
#include <stdio.h>


float avg(float x[],int);
float stdr(float x[],int);
int main()
{
	int n;
	float y,marks[50];
	
	printf("Enter no of students=");
	scanf("%d",&n);
	printf("Enter marks of students=");
		
	for(int i=0;i<n;i++)
	{
		scanf("%f",&marks[i]);
	}
	y=avg(marks,n);
	printf("%f",y);
}

float avg(float x[],int n)
{
	int i;
	float avg,s=0;
	for(i=0;i<n;i++){
		s=s+x[i];
	}
	avg=s/n;
	
	return avg;
 } 
