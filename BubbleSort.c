#include<stdio.h>

void printarray(int arr[], int n){
    int i ;
    for(i=0 ;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void SortArray(int arr[], int n){
    int i ;
    for(i=0;i<n;i++){
        int j,key;
        
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                key = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = key;
            }
            
        }
    }
}



int main(){
    printf("Bubble Sort.");
    int n = 6;
    int arr[] = {9,3,8,7,5,4};
     printf("\nUnsorted Arry is : ");
     printarray(arr,n);

     SortArray(arr,n);
     printf("\nsorted Array is :");
     printarray(arr,n);
}