#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char nm[20];
    printf("Enter a name: \n");
    scanf("%s",&nm);
    printf("Enter age: \n");
    scanf("%d",&age);
    if(strcmp(nm,"Ahir")==0 && age >= 18){
        printf("Voter");
    }else{
        printf("Not a voter");
    }
    return 0;
}
