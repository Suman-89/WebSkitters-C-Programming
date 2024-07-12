#include <stdio.h>
int main(){
    int num = 35;
    int *ptr = &num;
    printf("%d \n",num);
    printf("%d \n",*ptr);
    printf("%p",&num);
    return 0;
}
