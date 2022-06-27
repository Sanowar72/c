#include<stdio.h>
int main(){
    int i,num,pos,size,a[50],dltitm;

    printf("enter the array size ");
    scanf("%d",&size);
    
    if(size>50){
        printf("overflow condition");
    }else if (size<0)
    {
        printf("underflow conditon");
    }else
    {
        printf("enter the array elements\n");
        for(i=0;i<size;i++){
            scanf("%d",&a[i]);
        }
        printf("array elements are:  ");
        for ( i = 0; i < size; i++)
        { 
            
            printf("%d ",a[i]);
        }
        printf("\nenter the no you want insert ");
        scanf("%d",&num);
        printf("\enter the position u want to insert the data ");
        scanf("%d",&pos);
        for(i=size-1;i>=pos-1;i--){
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
        printf("the new array is ");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
        printf("\nenter the position u want to delete ");
        scanf("%d",&pos);
        dltitm=a[pos-1];
        for(i=pos-1;i<size-1;i++){
            a[i]=a[i+1];
        }
        size--;
        printf("deleted array is: %d\n",dltitm);
        printf("array after deleting element ");
        for(i=0;i<size;i++){
            printf("%d ",a[i]);
        }
    }
   
}