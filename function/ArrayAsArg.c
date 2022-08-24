#include<stdio.h>
#include<string.h>


int sum(int[],int);

int main(){
    int marks[5]={5,6,8,12,31},s,avg;
    s= sizeof(marks)/sizeof(marks[0]);
    avg= sum(marks,s);
    printf("avg marks of student is : %d",avg);
}
int sum(int marks1[],int s){
    int i,sum=0,avg;
    for(i=0;i<s;i++){
        sum=sum+marks1[i];
    }
    avg= sum/s;
    return avg;
}