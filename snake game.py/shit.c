#include<stdio.h>
int main(){
    int i,j,arr[100][100]; 
    printf("enter the array:");
    for(i=0;i<100;i++){
        for(j=0;j<100;j++){
            scanf("%d%d",arr[i][j]);
        }
    }
    printf("the user inputed array is:",arr[i][j]);
    return 0;
}