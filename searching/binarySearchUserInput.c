#include <stdio.h>

int binarySearch(int element[], int size,int key){
    int low = 0;
    int high = size - 1;

    while(low <= high){
        int middle = low +(high - low) / 2;

        while(low <= high){
            if (element[middle] == key)
            return middle;
        else if (element[middle] < key)
            low = middle + 1;
        else
            high = middle - 1;
        }
        return -1; // Return -1 if the element is not found
    };
};

int main(){
     int size, key;
    
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    // Input array elements
    printf("Enter %d elements in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    // Input the key to search for
    printf("Enter the key to search for: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, size, key);
    
    if (result != -1)
        printf("Element %d is present at index %d\n", key, result);
    else
        printf("Element %d is not present in the array\n", key);
    
    return 0;
};