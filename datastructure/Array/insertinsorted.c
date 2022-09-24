#include<stdio.h>


int sorted( int a[],int size){
    for(int i=0;i<size-1;i++){
        if(a[i]>a[i+1])
        return -1;
    }
    return 1;
}

int main(){
    int a[]={1,3,5,7,13,24,34,76,56};
    int size=sizeof(a)/sizeof(a[0]);
    // printf("%d",size);
    // int n;
    // printf("\nEnter the no u wanna insert :\n");
    // scanf("%d",&n);
    // int i=size-1;
    // while (a[i]>n)
    // {
    //   a[i+1]=a[i];
    //   i--;
    // }
    // a[i+1]=n;

    // for(int j=0;j<size;j++){
    //     printf("%d ",a[j]);
    // }
    int s=sorted(a,size);
    if(s==1)
    printf("Sorted\n");
    else 
    printf("not sorted\n");
    
}