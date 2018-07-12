#include<stdio.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
	
		int j;
        double k;
        char p[10];
    
    // Read and save an integer, double, and String to your variables.
        scanf("%d",&j);
        scanf("%lf",&k);
        fflush(stdin);
        scanf("%[^\n]%*c",p);
    
    // Print the sum of both integer variables on a new line.
        printf("%d\n",i+j);
        
        
    
    // Print the sum of the double variables on a new line.
            printf("%.1lf\n",d+k);
    
    // Concatenate and print the String variables on a new line
            printf("%s",s);
            printf("%s",p);
    // The 's' variable above should be printed first.	
    
    return 0;
}
