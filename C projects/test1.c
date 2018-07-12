#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t=5,i,n,a,m,s=0;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d\n", &a);
    while(t--){
      m=a%10;
      a=a/10;
      s=s+m;
    }
    printf("%d\n", s);
  }
  return 0;
}
