//5. find out the list of krishnamurthi no. in a user given range.
#include<stdio.h>
int factorial(int);
int loop(int);
int main(){
    int cNum,rem,temp,n,sum=0;
    printf("Enter a limit :\n");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        cNum = i;
        if(cNum==loop(i)){
            printf("%d \n",i);
        }
    }
    return 0;
}
int factorial(int var){
    int mul=1;
    while(var!=0){
        mul*=var;
        var--;
    }
    return mul;
}
int loop(int constant){
    int rem,temp,sum=0;
        rem = constant%10;
        temp = factorial(rem);
        sum+=temp;
        constant/=10;
    return sum;
}
