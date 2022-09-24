#include<stdio.h>


int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int temp,i,j;


// for(i=0;i<7/2;i++){
//     temp=arr[i];
//     arr[i]=arr[7-i-1];
//     arr[7-i-1]=temp;
// }


// another method
for(i=0,j=6;i<j;i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
printf("After reverse of array element is: ");
for(i=0;i<7;i++){
    printf("%d  ",arr[i]);
}
    
}