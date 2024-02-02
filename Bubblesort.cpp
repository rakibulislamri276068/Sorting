#include<iostream>
using namespace std;

void sortarray(int arr[], int n){
    int i;
    for(i = 0;i<n;i++){
        int temp;
        int j;
        for(j= 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;

            }
        }
    }

}


void printarray(int arr[], int n){
    for(int i = 0 ;i< n ; i++ ){
        cout<<arr[i]<<"\t";
    }

}


int main()
{
    cout<<"Bubble Sort.";
    int n=6;
    int arr[] = {5,3,8,4,9,6};
    cout<<"Unsorted array is :";
    printarray(arr,n);

    sortarray(arr, n);
    cout<<"Sorted Array is ";
    printarray(arr,n);
}