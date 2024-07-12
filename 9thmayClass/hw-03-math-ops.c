#include<stdio.h>
int main(){
    int n1, n2;
    float result;
    char ops;
    printf("Please enter any two numbers: \n");
    scanf("%d %d",&n1,&n2);
    printf("Please enter any sign (+,-,*,/): \n");
    scanf(" %c",&ops);
    if(ops =='+'){
        result = n1 + n2;
        printf("Sum is : %0.2f",result);
    }
    else if(ops == '-'){
        result = n1 - n2;
        printf("Sum is : %0.2f",result);
    }else if(ops == '*'){
        result = n1 * n2;
        printf("Sum is : %0.2f",result);
    }else if(ops == '/'){
        result = n1 / n2;
        printf("Sum is : %0.2f",result);
    }else{
        printf("Not a valid sign");
        return 1;
    }
    return 0;
}
