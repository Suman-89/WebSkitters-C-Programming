#include<stdio.h>
int main(){
   int n1,n2,n3;
   printf("Please enter your numbers: \n");
   scanf("%d %d %d",&n1,&n2,&n3);
    printf("First Number = %d \n",n1);
    printf("Second Number = %d \n",n2);
    printf("Third Number = %d \n",n3);
   if(n1>n2 && n1>n3){
       printf("The 1st Number is the greatest among three");
   }else if(n2>n1 && n2>n3){
       printf("The 2nd Number is the greatest among three");
   }else if(n3>n1 && n3>n2){
       printf("The 3rd Number is the greatest among three");
   }else{
       printf("Numbers are equal");
   }
   return 0 ;
}
