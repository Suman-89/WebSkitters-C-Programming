#include<stdio.h>
int main(){
   int year;
   printf("Please enter the year: ");
   scanf("%d",&year);
   (year % 4) == 0 ? printf("The year %d is a leap year",year):
       printf("This is not a leap year");
    return 0;
}
