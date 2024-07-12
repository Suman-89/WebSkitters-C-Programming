#include <stdio.h>
#include <math.h>
int main(){
    int num[10],nos,sum=0;
    printf("Enter no. of digit to be added: \n");
    scanf("%d",&nos);
    printf("Please enter binary digit: \n");
    for(int i=(nos-1);i>=0;i--){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<=(nos-1); i++){
        sum +=(num[i]*(pow(2,i)));
    }
    printf("The decimal is %d: \n",sum);
    return 0;
}
