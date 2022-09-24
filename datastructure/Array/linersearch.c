#include<stdio.h>

int linerSearch(int arr[],int key){

    

    for(int i=0;i<7;i++){
        if(key == arr[i]){
            return i;
        }
       
    }
     return -1;
}


int main(){
    
    int arr[7]={1,3,6,8,9,4,3};
    int key;
    printf("Enter the no u wanna search\n");
    scanf("%d",&key);
    
    int r = linerSearch(arr,key);
    // printf("%d",r);

    if(r==-1)
    printf("Search unccessful....\n");
    else {

    printf("Search Successful....\n");
    printf("no is present at %d index or at %d position",r,r+1);
    }

}