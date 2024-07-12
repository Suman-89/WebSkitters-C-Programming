 #include<stdio.h>
int main(){
    int age;
    char sex;
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("Enter your sex: \n");
    scanf(" %c",&sex);
    if(age >= 20 && sex == 'M' || sex == 'm')
        printf("Voter");
    else
        printf("Not a voter");
    return 0;
}
