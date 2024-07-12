#include<stdio.h>
int isArmstrong();
int power();
int main(){
    int st,en,cp;
    printf("Enter starting range and End range: ");
    scanf("%d %d",&st,&en);
    printf("\n-------------------------------------\n");
    printf("Armstrong numbers in this range are: \n")
    for(int i=st;i<en;i++){
        cp=i;
        if(cp==isArmstrong(i)){
            printf("%d",cp);
        }
    }
    return 0;
}
int isArmstrong(int n){
    int len;
    len = sizeof(n)/n;
}
