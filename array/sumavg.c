#include<stdio.h>
int main(){
   int i,a[5];
    float avg,sum=0;
    printf("enter the marks of student\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<5;i++)
    sum=sum+a[i];
    avg=sum/5;
    printf("sum is:%f  avg is: %f",sum,avg);
    return 0;
}