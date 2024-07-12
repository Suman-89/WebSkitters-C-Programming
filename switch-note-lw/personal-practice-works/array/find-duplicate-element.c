#include<stdio.h>
int main(){
    int num_arr[10],ip,i;
    printf("Input the number of elements to be stored in the array: \n");
    scanf("%d",&ip);
    printf("Input %d elements in the array: \n",ip);
    for(i=0;i<=(ip-1);i++){
        printf("element - %d: \t",i);
        scanf("%d",&num_arr[i]);
    }
    printf("Expected Output : \n");
    printf("Total number of duplicate elements found in the array is : \n");
    int dupli = duplicate(num_arr,ip);
    printf("%d",dupli);
    return 0;
}
int duplicate(int arr,int ip){
    int i,j,dupnum=0;
    for(i=0;i<=(ip-1);i++){
        for(j=1;j<=(ip-1);j++){
            if(arr[i]== arr[j]){
                dupnum++;
            }
        }
    }
    return dupnum;
}
