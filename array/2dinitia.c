#include<stdio.h>

int main(){
    
    int a[2][3]={3,5,1,7,2,8};

    printf("array elements are : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}