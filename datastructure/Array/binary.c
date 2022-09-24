#include<stdio.h>


int mid;
int rbinary(int arr[],int l,int h,int key){

    if(l<=h){
        mid=(l+h)/2;
        if(key==arr[mid])
        return mid;
        else if(key<arr[mid])
        return rbinary(arr,l,mid-1,key);
        else 
        return rbinary(arr,mid+1,h,key);
    }
    return -1;

}


// int binary(int arr[],int l,int h,int key){

//     while(l<=h){
//         mid=(l+h)/2;
//         if(key==arr[mid])
//         return mid;
//         else if(key<arr[mid])
//         return h=mid-1;
//         else
//         return l=mid+1;
//     }
//     return -1;
// }

int main(){

    int arr[]={1,3,5,7,9,14,17,19,22,25,28};
    int size=sizeof(arr)/sizeof(arr[0]);
    int l=0,h=size-1,key;
    printf("Enter the no : \n");
    scanf("%d",&key);


    int res=rbinary(arr,l,h,key);


    // int res=binary(arr,l,h,key);

    if(res==-1)
    printf("unsuccessfull....\n");
    else{
    printf("successfull....\n");
    printf("no is present at %d index or %d position",mid,mid+1);
    }

}