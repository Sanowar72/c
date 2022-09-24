#include<stdio.h>



int main(){
    int arr[8]={1,4,9,14,95,24,76,97};
    int max=arr[0];

    int min = arr[0];
    int sum=0;

    for(int i=0;i<8;i++){
        if(arr[i]>max)
        max=arr[i];
    }

    for(int j=0;j<8;j++){
        if(arr[j]<min)
        min=arr[j];
    }


    for(int k=0;k<8;k++){
        sum = sum+arr[k];
    }

    printf("min element is : %d\n",min);

    printf("max element is : %d\n",max);

    printf("Sum of all element in array is : %d\n",sum);

    printf("avg of element is : %d",sum/8);
}