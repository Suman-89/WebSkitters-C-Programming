#include<stdio.h>
int main(){
    int total,sub1, sub2, sub3,num;
    float avg;
    printf("Please enter marks of subject1: \n");
    scanf("%d",&sub1);
    printf("Please enter marks of subject2: \n");
    scanf("%d",&sub2);
    printf("Please enter marks of subject3: \n");
    scanf("%d",&sub3);
    total = sub1 + sub2 + sub3;
    avg = total / 3;
    num = avg /10;
    printf("Total marks is: %d \n",total);
    printf("Average is: %0.2f \n",avg);
    if(avg < 0 || avg > 100){
        printf("Invalid score entered !");
        return 1;
    }
    switch(num){
        case 10:
            printf("Obtained Grade is AA");
            break;
        case 9:
            printf("Obtained Grade is A+");
            break;
        case 8:
            printf("Obtained Grade is A");
            break;
        case 7:
            printf("Obtained Grade is B+");
            break;
        case 6:
            printf("Obtained Grade is B");
            break;
        case 5:
            printf("Obtained Grade is C+");
            break;
        case 4:
            printf("Obtained Grade is C");
            break;
        default:
            printf("Obtained Grade is F");
            break;
    }
    return 0;
}
