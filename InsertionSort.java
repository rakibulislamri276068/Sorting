public class InsertionSort {

    static void insertionSort(int arr[], int n) {
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    static void printArray(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + "\t");
        }
    }

    public static void main(String[] args) {
        System.out.println("Insertion Sorting is Start.");

        int arr[] = {5, 9, 7, 6, 3, 4, 8};
        int n = 7;

        System.out.print("Unsorted array is: ");
        printArray(arr, n);

        insertionSort(arr, n);

        System.out.println("\nSorted Array is:");
        printArray(arr, n);
    }
}
