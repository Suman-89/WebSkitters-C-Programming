#include<stdio.h>
int main(){
    char arr[] = {'a','b','i','o','U'};
    int i,sum=0;
    for(i=0;i<=5;i++){
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E'
           || arr[i]=='I' || arr[i]=='O' || arr[i]=='U' )
            sum+=1;
    }
    printf("No of vowels = %d",sum);
    return 0;
}
