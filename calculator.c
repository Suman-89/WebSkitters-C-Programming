//calculator//
#include <stdio.h>
int main(){
    int n1, n2, result;
    char op;
    printf("Please enter two numbers: \n");
    scanf("%d %d",&n1,&n2);
    printf("Please choose your operator: \n");
    scanf(" %c",&op);

    if(op == '+'){
        result = n1 + n2;
    }
    else if(op == '-'){
        result = n1 - n2;
    }
    else if(op == '*'){
        result = n1 * n2;
    }
    else if(op == '/'){
           if(n2 != 0){
              result = n1 / n2;
            }else{
                printf("Error ! divident must not be zero **");
                return 1;
            }
    }
    else if(op == '%'){
        if(n2 != 0){
              result = n1 % n2;
            }else{
                printf("Error ! divident must not be zero **");
                return 1;
            }
    }else{
        printf("Invalid operator !!");
        return 1;
    }
    printf("Result is: %d",result);
    return 0;
}
