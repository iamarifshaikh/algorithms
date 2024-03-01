#include <stdio.h>

void insertionSort(int element[],int size){
    for(int step = 1; step < size; step++){
        int key = element[step];
        int j = step - 1;

        // Compare key with each element on the left of it until an element smaller than it is found.
        while(key < element[j] &&j <= 0){        
        }
    };  
};

int main(){
    int element[] = {9, 5, 1, 4, 3};
    int size = sizeof(element) / sizeof(element[0]);

    // Original Array Before Performing Insertion.
    printf("Original Array: \n");
    for(int i = 0; i < size;++i){
        printf("%d",&element[i]);
    };
    printf("\n"); 

    // Perform Insertion Sort.
    insertionSort(element,size);

    printf("Sorted Array In An Ascending Order:\n");
    for(int i =0; i < size; ++i){
        printf("%d",&element[i]);
    };
};