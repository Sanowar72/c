#include<stdio.h>
#include<stdlib.h>



int callocs() {
    int n,i,*p;
    printf("********calloc************\n");
    printf("Enter how much no u want to insert\n");
    scanf("%d",&n);
    p=(int *)calloc(n,sizeof(int));
    printf("enter no u want to insert\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("your inserted no is:\n");
    for(i=0;i<n;i++){
        printf("%d\n",*(p+i));
    }
    free(p);

}


float mallocs(){
    float *pt;
    int j,m;
    printf("**********malloc***************\n");
    printf("Enter how much no u want to insert\n");
    scanf("%d",&m);
    pt=(float *)malloc(m*sizeof(float));
    printf("enter no u want to insert\n");
    for(j=0;j<m;j++){
        scanf("%f",(pt+j));
    }
    printf("your inserted no is:\n");
    for(j=0;j<m;j++){
        printf("%f\n",*(pt+j));
    }
    free(pt);

}

int main(){
    // int n,i,*p;
    // printf("********calloc************");
    // printf("Enter how much no u want to insert\n");
    // scanf("%d",&n);
    // p=(int *)calloc(n,sizeof(int));
    // printf("enter no u want to insert\n");
    // for(i=0;i<n;i++){
    //     scanf("%d",(p+i));
    // }
    // printf("your inserted no is:\n");
    // for(i=0;i<n;i++){
    //     printf("%d\n",*(p+i));
    // }
    // free(p);



    // float *pt;
    // int j,m;
    // printf("**********malloc***************");
    // printf("Enter how much no u want to insert\n");
    // scanf("%d",&m);
    // pt=(float *)malloc(m*sizeof(float));
    // printf("enter no u want to insert\n");
    // for(j=0;j<m;j++){
    //     scanf("%f",(pt+j));
    // }
    // printf("your inserted no is:\n");
    // for(j=0;j<m;j++){
    //     printf("%f\n",*(pt+j));
    // }
    // free(pt);


   callocs();
   mallocs();
    

}