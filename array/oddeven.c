#include<stdio.h>
int main(){
    int i,even=0,odd=0,n,a[n],b[n],c[n],j;
    printf("enter the size of array");
    scanf("%d",&n);

    printf("enter the array elements");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
        if(a[i]%2==0){
            // b[n]=a[i];
            printf("even no are:%d\n",a[i]);
            even=even+1;
            // for(j=0;i<n;i++){
            //     scanf("%d",&b[j]);
            // }
        }else{
            // c[n]=a[i];
            printf("odd no is:%d\n",a[i]);
            odd+=1;
        }
    }
    printf("total even no is:%d\n total odd no is :%d\n",even,odd);
    // for(j=0;j<n;j++){
    //     printf("even no are %d",b[j]);
    // }
}