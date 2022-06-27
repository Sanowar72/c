#include<stdio.h>
int main(){
    int a[2][3],i,j,b[3][2];
    printf("enter the matrix element\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix element is\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }



    printf("transpose of matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}