#include<stdio.h>
int main(){
    int passcode;
    printf("Please enter your passcode: \n");
    scanf("%d",&passcode);
    if(passcode == 1337){
        printf("Login successfull**");
    } else {
        printf("Wrong passcode !!");
    }
    return 0;
}
