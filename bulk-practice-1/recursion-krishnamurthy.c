#include<stdio.h>
int isKrishnamurthy();
int fact();
int main(){
    int st,en,cp;
    printf("Enter starting range and End range: ");
    scanf("%d %d",&st,&en);
    printf("\n-------------------------------------\n");
    printf("Krishnamurthy numbers in this range are: \n");
    for(int i=st;i<en;i++){
        if(i==0 || i==1){
            printf("%d\t",i);
        }else{
            cp=i;
            if(cp==isKrishnamurthy(i)){
               printf("%d\t",cp);
            }
        }
    }
    return 0;
}
int isKrishnamurthy(int num){
    int sum=0,temp;
    while(num!=0){
        temp = num%10;
        sum+=fact(temp);
        num/=10;
    }
    return sum;
}
int fact(int i){
    if(i==0||i==1){
        return 1;
    }else{
        return i*fact(i-1);
    }
}
