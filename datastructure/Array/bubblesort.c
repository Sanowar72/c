#include<stdio.h>

int main(){
    
    int n,i,j,temp;
    printf("Enter the array size :\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements : \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++){
        if(a[i]<a[i+1]){
            printf("Array is sorted : \n");
            return 0;
        }
          else
          {
            for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++)
            {
               if(a[j]>a[j+1])
               {
                   temp=a[j];
                   a[j]=a[j+1];
                   a[j+1]=temp;
               }
            }
          }
        }
    }

    // for(i=0;i<n;i++){
    //     for(j=0;j<n-i-1;j++){
    //         if(a[j]>a[j+1]){
    //             temp=a[j];
    //             a[j]=a[j+1];
    //             a[j+1]=temp;
    //         }
    //     }
    // }
    printf("Sorted array is : \n");
    for(i=0;i<n;i++){
        printf("%d   ",a[i]);
    }
}