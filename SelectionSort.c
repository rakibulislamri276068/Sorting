#include<stdio.h>

void SortArray(int arr[],int n ){

    for(int i = 0;i<n-1;i++){
        int min =i ;
        for(int j= i +1;j<n;j++){
            if(arr[min]>arr[j])
            min  = j ;
        }
         int temp = arr[min];
         arr[min] = arr[i];
         arr[i] = temp;
    }
}



void printarray(int arr[],int n){
    for(int i=0;i<n ;i++){
        printf("%d,",arr[i]);
    }
}

int main(){
    printf("Sorting code \n");
    int arr[] = {6,2,1,8,7,6,9,8,2,6,4};
    int n = 11;
    printf("Unsorted Array is :");
    printarray(arr,n);
    
    SortArray(arr,n);

    printf("\nSorted Array is :");
    printarray(arr,n);
}