#include<stdio.h>
#include <string.h>
int main(){
    int i;
    char name[20],temp;
    printf("Please enter your name: \n");
    scanf("%s",&name);
    size_t n = strlen(name);
    for(i=0;i<n/2;i++){
        temp = name[n-1-i];
        name[n-1-i] = name[i];
        name[i] = temp;
    }
    printf("Reversed username: %s",name);
    return 0;
}
