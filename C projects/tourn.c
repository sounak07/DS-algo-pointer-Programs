#include<stdio.h>

int main()
{
	int tourn[100],i,n;
	
	printf("Give n:\n");
	scanf("%d",&n);
	
	for(i=n;i<=(2*n-1);i++)
		scanf("%d",&tourn[i]);
	
	
	for(i=(2*n-2);i>1;i=i-2)
		tourn[i/2]=maxi(tourn[i],tourn[i+1]);
	
	
	printf("Max = %d\n",tourn[1]);
	printf("Next-Max = %d\n",next(tourn,n));
	
	return 0;
}


	
int next(int tourn[],int n)	
{
	int nextmax,i=2;
	if(tourn[2]>tourn[3])
	{
		nextmax=tourn[3];		
	}
	else{
		nextmax=tourn[2];
	}
	
	while(i<=2*n-1)
	{
		if(tourn[i]>tourn[i+1])
		{
			nextmax=maxi(tourn[i+1],nextmax);
			i=2*i;
		}
		else
		{
			nextmax=maxi(tourn[i],nextmax);
			i=2*(i+1);
		}
	}
	
	return (nextmax);
}

int maxi(int i,int j)
	{
		if(i>j) return i;
		else return j;
	}
