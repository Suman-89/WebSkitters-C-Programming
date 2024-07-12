//Reversing a name
#include<stdio.h>
#include <string.h>
int main(){
    char user[10],temp;
    printf("Please enter username: \t");
    scanf("%s",&user);
    int n = strlen(user);
    printf("Size %d",n);
    for(int i=0; i<=(5/2); i++){
        temp = user[5-1-i];
        user[5-1-i] = user[i];
        user[i] = temp;
    }
    printf("Reversed username: %s",user);
    return 0;
}
