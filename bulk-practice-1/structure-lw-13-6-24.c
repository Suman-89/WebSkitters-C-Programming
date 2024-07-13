#include<stdio.h>
struct user{
    char name[50];
    int sub1;
    int sub2;
    int total;
    float avg;
};
int main(){
    struct user u1;
    int n;
    printf("Enter no. of students: \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter your name:");
        scanf("%s",&u1.name);
        printf("Marks of subject 1: \n");
        scanf("%d",&u1.sub1);
        printf("Marks of subject 2: \n");
        scanf("%d",&u1.sub2);
        u1.total = u1.sub1 + u1.sub2;
        u1.avg = u1.total / 2;
        printf("Total is %d\n",u1.total);
        printf("Average is %0.2f\n",u1.avg);
        if(u1.avg >= 40){
            printf("Passed\n");
            printf("\n-------------------------------------\n");
        }else{
            printf("Failed\n");
            printf("\n-------------------------------------\n");
        }
    }
    return 0;
}
