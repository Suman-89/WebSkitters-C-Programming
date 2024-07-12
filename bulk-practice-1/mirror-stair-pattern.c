 #include<stdio.h>
 int main(){
     int i,j,sp,n;
     printf("Enter the no. of rows: ");
     scanf("%d",&n);
     printf("\n----------------------------------\n");
     for(i=0;i<n;i++){
        for(sp=0;sp<i;sp++){
            printf(" ");
        }
        for(j=n;j>i;j--){
            if(j==n||j==(i+1)||i==0||i==n){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
     }
     return 0;
 }
