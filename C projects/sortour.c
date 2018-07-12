#include<stdio.h>

int main()
{
	int tourn[100],i,n,min;
	
	printf("Give n:\n");
	scanf("%d",&n);
	
	for(i=n;i<=(2*n-1);i++)
		scanf("%d",&tourn[i]);
	
	
	for(i=(2*n-2);i>1;i=i-2)
		tourn[i/2]=maxi(tourn[i],tourn[i+1]);
	
	min=0;
	
	printf("Sorted Elemnts:\t");
	for(i=1;i<=n;i++)
	{
		printf("%d",tourn[1]);
		getnext(tourn,n,min);
	}
	printf("\n");
	
	return 0;
}


	
int getnext(int tourn[],int n,int min)	
{
	int nextmax,i=2;
		
	while(i<=2*n-1)
	{
		if(tourn[i]>tourn[i+1])
		{
			tourn[i]=min;
			i=2*i;
		}
		else
		{
			tourn[i+1]=min;              //(N-1)+2log2N
			i=2*(i+1);
		}
	}
	
	for(i=i/2;i>1;i=i/2)
	{
		if(i%2==0)
			tourn[i/2]=maxi(tourn[i], tourn[i+1]);
		else
			tourn[i/2]=maxi(tourn[i], tourn[i-1]);
	}
	
	
}

int maxi(int i,int j)
	{
		if(i>j) return i;
		else return j;
	}
	
//int minval(int tourn[], int n)
//{
//		
//}	
