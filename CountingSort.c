#include<stdio.h>

void sortarry(int arr[],int n,int range){
    int output[n];
    int count[range + 1];
    int i ;
    for(i = 0; i<= range;i++){
        count[i] = 0;
    }
for(i = 0 ;i<n ;i++){
    count[arr[i]]++;

}
for(i = 1; i<= range;i++){
    count[i] += count[i-1];
}
for(i = n-1; i>=0;i--){
    output[count[arr[i]]-1] = arr[i];
    count[arr[i]]--;
}
 for (i = 0; i < n; i++)
        arr[i] = output[i];

}



void printarray(int arr[], int n){
    for(int i = 0 ;i<n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    printf("Counting Sort..\nUnsorted Array is :");
    int arr[] = {1,8,9,33,5,4,5};
    int n = 7;
    int range = 33;
    printarray(arr,n);

   sortarry(arr,n,range);
   printf("\nSorted Array is :");
   printarray(arr,n);
}