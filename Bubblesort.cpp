#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n){
    for(int i = 0; i<n ; i++){
        cout<<arr[i]<<"  ";
    }
}

void sortarray(int arr[], int n){
for(int i = 0 ;i< n ;i++)
 
for(int j = i + 1 ;j<n ;j ++){
    if ( arr[i]>arr[j]){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp ;
    }
}
}


int main(){
    cout<<"Bubble sort\n";
    int arr[] = {6,9,0,2,4,1,3};
    int n = 7;
    cout<<"Unsorted Arra is:";
    printarray(arr, n);

    sortarray(arr,n);
    cout<<"\nSorted Array is :";
    printarray(arr,n);
}
