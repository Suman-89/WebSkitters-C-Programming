#include<stdio.h>
struct students{
    int roll;
    char user[20];
    int sub1;
    int sub2;
    int total;
    float avg;
};
int main(){
    struct students st;
    int i,n;
    printf("Enter the number of students:=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        st.roll = i;
        printf("Roll No. - %d\n",st.roll);
        printf("Enter your name:");
        scanf("%s",&st.user);
        printf("Marks of Sub1:-");
        scanf("%d",&st.sub1);
        printf("Marks of Sub2:-");
        scanf("%d",&st.sub2);
        st.total = st.sub1 + st.sub2;
        st.avg = st.total/2;
        printf("Total:- %d\n",st.total);
        printf("Avg:- %0.2f\n",st.avg);
        if(st.avg > 30){
            printf("Grade:- Pass\n");
        }else{
            printf("Grade:- Fail\n");
        }
    }
    return 0;
}
