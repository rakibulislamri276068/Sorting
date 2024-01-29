#include<stdio.h>

void  SortArray(int arr[], int n){
    int i,j;
    for(i=1;i<=n;i++){
        int key = arr[i] ;
        j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

int main()
{
    
    printf("Insertion Sort..... \n");
    int arr[] = {10,4,0,9,3,6};
    int n = 6;
    printf("Unsorted Array :");
    printArray(arr , n);

    SortArray(arr,n);
    printf("\n  Sorted Array :");
    printArray(arr,n);

}

