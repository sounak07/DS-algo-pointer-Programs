#include<stdio.h>
int main()
{
int t;
char c[10];
scanf("%d",&t);
while(t--)
{
  scanf("%s\n",&c);
  if(c=="b" || c=="B"){
    printf("Battleship\n");
  }else if(c=="c" || c=="C"){
    printf("Cruiser\n");
  }else if(c=="d" || c=="D"){
    printf("Destroyer\n");
  }else if(c=="f" || c=="F"){
    printf("Frigate\n");
  }
}
return 0;
}
