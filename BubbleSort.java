
public class BubbleSort{ 


   static void printarray(int arr[], int n)
{
    int i ;
    for(i = 0 ;i<n ;i++) {
        System.out.print(arr[i]+ "\t");
    }
}

static void sortarray(int arr[], int n){
    int i ;
for(i = 0 ;i<n ;i++){
    int j,temp ;
    for(j = 0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
           temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp ;
        }
    }
}
}



public static void main(String[] args) {
    System.out.println("Bubble sort. ");
    int[] arr = {5,3,7,9,6,4};
    int n = 6;
    System.out.print("Unsorted array is :");
    printarray(arr, n);
    sortarray(arr,n);
    System.out.print("sorted Array is: ");
    printarray(arr,n);
}
}