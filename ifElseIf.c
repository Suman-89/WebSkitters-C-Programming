/* w.a.p in c to calculate ,
if user input a time before 10 output is Goodmorning,
if user input a time before 11 to 20 output is Good day,
otherwise Good evening.*/

#include<stdio.h>
int main(){
     int time;
     printf("Please enter your time: \n");
     scanf("%d",&time);
     if(time <= 10){
        printf("Good Morning");
     }else if (time >= 11 && time < 20){
         printf("Good Day");
     }else {
         printf("Good Evening");
     }
  return 0;
}
