#include<stdio.h>
int main(){
    int sub1, sub2, sub3, total;
    float average;
    printf("Please enter the marks of subject 1: \n");
    scanf("%d",&sub1);
    printf("Please enter the marks of subject 2: \n");
    scanf("%d",&sub2);
    printf("Please enter the marks of subject 3: \n");
    scanf("%d",&sub3);
    total = sub1 + sub2 + sub3;
    average = total / 3;
    printf("Total marks: %d \n",total);
    printf("Average marks: %0.2f \n",average);
    if(average < 0 || average > 100){
        printf("Invalid !!");
        return 1;
    }
    else if(average>=90)
        printf("Grade: AA");
    else if(average>=80)
        printf("Grade: A+");
    else if(average>=70)
        printf("Grade: A");
    else if(average>=60)
        printf("Grade: B+");
    else if(average>=50)
        printf("Grade: B");
    else if(average>=40)
        printf("Grade: C+");
    else if(average>=30)
        printf("Grade: C");
    else
        printf("Grade: Fail");
    return 0 ;
}
