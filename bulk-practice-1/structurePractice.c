#include<stdio.h>
int main(){
    int id;
    char name[20],st[20];
    struct person{
        int id;
        char name[50];
        struct status{
            char status[50];
        }s;
    }p;
    printf("Enter id , name and status: \n");
    scanf("%d %s %s",&id,&name,&st);
    p.id = 001;
    strcpy(p.name,name);
    strcpy(p.s.status,st);
    printf("id is %d\n",p.id);
    printf("Name is %s\n",p.name);
    printf("Status is %s\n",p.s.status);
    return 0;
}
