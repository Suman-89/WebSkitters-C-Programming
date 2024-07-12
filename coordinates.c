#include<stdio.h>
int main(){
    float x,y;
    printf("Please enter your coordinates: \n");
    scanf("%f %f",&x,&y);
      if(x>0 && y>0){
        printf("The coordinate point (%0.2f,%0.2f) lies in the First quadrant.",x,y);
      }else if(x>0 && y<0){
        printf("The coordinate point (%0.2f,%0.2f) lies in the Second quadrant.",x,y);
      } else if(x<0 && y<0){
          printf("The coordinate point (%0.2f,%0.2f) lies in the Third quadrant.",x,y);
      }else if(x<0 && y>0){
          printf("The coordinate point (%0.2f,%0.2f) lies in the Fourth quadrant.",x,y);
      }else {
          printf("The coordinate point (%0.2f,%0.2f) lies in the origin.",x,y);
      }
return 0;
}
