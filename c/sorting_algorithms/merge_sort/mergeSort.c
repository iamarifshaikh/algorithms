#include <stdio.h>

void merge(int array[],int left,int middle, int right){
    // To keep track of indices of elements in the left,middle, and right
    int a,b,c;

    int sizeLeft = middle - left + 1; // Size of the left subarray
    int sizeRight = right - middle; // Size of the right subarray

    // Create temporary arrays to store the elements of the two subarrays
    int leftSubArray[sizeLeft] , rightSubArray[sizeRight];

    // Copy data to temporary arrays leftSubarray[] and rightSubarray[]
    for(a = 0; a < sizeLeft; a++)
        leftSubArray[a] = array[left + a];
    for(b = 0; b < sizeRight; b++)
        rightSubArray[b] = array[middle + 1 + b];

    // Merge the temporary subarrays back into array[left..right]
    a = 0; // Initial index of the left subarray
    b = 0; // Initial index of the right subarray
    c = left; // Initial index of merged subarray
    while(a < sizeLeft && b < sizeRight){
        if(leftSubArray[a] <= rightSubArray[b]){
            array[c] = leftSubArray[a];
            a++;
        }else{
            array[c] = rightSubArray[b];
            b++;
        }
        c++;
    }

     // Copy the remaining elements of leftSubarray[], if any
    while (a < sizeLeft) {
        array[c] = leftSubArray[a];
        a++;
        c++;
    }

    // Copy the remaining elements of rightSubarray[], if any
    while (b < sizeRight) {
        array[c] = rightSubArray[b];
        b++;
        c++;
    }

};

void mergeSort(int array[],int left,int right){
    if(left < right){
        // Find the middle point to divide the array into two halves
        int middle = left + (right - left) / 2;

        // Recursively sort the first and second halves
        mergeSort(array,left,middle);
        mergeSort(array,middle + 1,right);

        // Merge the sorted halves
        merge(array,left,middle,right);
    };
};

// Utility function to print an array
void printArray(int array[],int size){
    for(int i = 0; i < size; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
};

int main(){
    int size;

    printf("Enter the size of the array you want to merge: ");
    scanf("%d", &size);

    int array[size];
    // Input the elements of the array according to the size of the array
    printf("Enter %d elements: \n",size);
    for(int i=0;i < size;i++){
        printf("Element %d: ",i + 1);
        scanf("%d", &array[i]);
    };
    printf("\n");

    // Print Original Array
    printArray(array,size);

    mergeSort(array,0,size - 1);

    printf("Sorted array: ");
    printArray(array,size);

    return 0;
};