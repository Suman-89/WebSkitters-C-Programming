#include <stdio.h>
#include <string.h>

struct user{
    int id;
    char name[20];
};
int main(){
    struct user u1;
    strcpy(u1.name,"Suman"); //strcpy converts string into an array.
    for(int i=0;i<=4; i++){
     printf("%c",u1.name[i]);
    }
    return 0;
}
