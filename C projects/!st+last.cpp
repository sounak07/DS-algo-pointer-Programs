#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        char n[8];
        scanf("%s",&n);
        l=strlen(n);
        printf("%d\n",n[0]-'0'+n[l-1]-'0');
    }
}
