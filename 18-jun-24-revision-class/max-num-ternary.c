//Maximum number finding using ternary operator
#include<stdio.h>
int main(){
    int n1,n2,n3,max;
    printf("Enter three numbers: \n");
    scanf("%d %d %d",&n1,&n2,&n3);
    (n1>n2 && n1>n3)?
    printf("Maximum number is: %d",n1):(n2>n1 && n2>n3)?
    printf("Maximum number is: %d",n2):printf("Maximum number is: %d",n3);
    return 0;
}
