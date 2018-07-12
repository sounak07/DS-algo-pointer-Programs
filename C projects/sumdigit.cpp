#include<stdio.h>

int main()
{
    int t,n,s,i,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {

        scanf("%d",&n);
        while(n)
        {
            m=(n%10);
            n=n/10;
						s=s+m;
        }
        printf("%d\n",s);
				s=0;
    }

    return 0;
}
