//List of Amstrong number in a user-defined range
#include<stdio.h>
#include<math.h>
int isAmstrong(int);
int power(int);
int main(){
    int n,i,start,end;
    printf("Enter starting range: \n");
    scanf("%d",&start);
    printf("Enter ending range: \n");
    scanf("%d",&end);
    int num[end];
    printf("Amstrong numbers are: \n");
    for(i=start;i<end;i++){
        n=i;
        if(n==isAmstrong(i)){
            printf("%d\t",isAmstrong(i));
        }
    }
    return 0;
}
int isAmstrong(int input){
    int sum=0,temp,c;
    double cube;
    c = power(input);
    while(input!=0){
            temp = input%10;
            cube = pow(temp,c);
            sum+=cube;
            input/=10;
    }
    return sum;
}
int power(int p){
    int count = 0;
    if(p==0){
        return 1;
    }
    while(p!=0){
        p/=10;
        count++;
    }
    return count;
}
