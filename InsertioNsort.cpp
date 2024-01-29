#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    int i,j;
    for(i=1;i<n;i++){
       int key = arr[i];
        j= i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}


void printArray(int arr[], int n){
    int i;
    for(i=0;i<n;i++){
       cout<<arr[i]<<"\t";
    }
}

int main(){
  cout<<"Insertion Sorting is Start.\n";
    int arr[] = {5,9,7,6,3,4,8};
    int n= 7;
    cout<<"Unsorted array is :";
    printArray(arr,n);

    InsertionSort(arr,n);
    cout<<"\nSorted Array is:";
   printArray(arr,n);
  
}