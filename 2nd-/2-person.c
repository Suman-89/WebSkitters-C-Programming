// if a person name is "Suchi" and his age is "65" both, output will be "retired" otherwise "employee".
#include<stdio.h>
#include<string.h>
int main(){
    int age;
    char name;
    printf("Enter name \n");
    scanf("%s",&name);
    printf("Enter age: \n");
    scanf("%d",&age);
    (name=="Suchi" && age==65)? printf("retired"):printf("employee");
    return 0;
}
