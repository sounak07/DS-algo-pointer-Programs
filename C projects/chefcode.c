#include <stdio.h>
#include<stdlib.h>

int main()
{
  int x[2000],n,s=1,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&x[i]);
  }
  for(i=0;i<n;i++)
  {
    while(x[i]>=1)
    {
      s=s*x[i];
      x[i]--;
    }
    printf("%d\n",s);
    s=1;
  }
  return 0;
}
