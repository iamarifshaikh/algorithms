#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;    
};

void selectionSort(int element[],int size){
    // To Access Each Element In An Array.
    for(int step = 0;step < size - 1; step++){
        int minimum = step;
        for(int i = step + 1;i < size; i++){
            if(element[i] < element[minimum]){
                minimum = i;
            }
        };
    // Put Minimum At The Correct Position. 
    swap(&element[minimum],&element[step]);
    };
};

int main(){
    int element[] = {23,5,8,45,33};
    int size = sizeof(element) / sizeof(element[0]);

    // Printing Original Array Before Sorting Or The Unsorted Array.
    printf("Original Array\n");
    for(int i = 0;i < size; ++i){
        printf("%d ",element[i]);
    }
    printf("\n");
    
    // Performing Sort
    selectionSort(element,size);

    // Printing The Arrays After Sorting 
    printf("Sorted Array In An Ascending Order:\n");
    for(int i = 0;i < size;++i){
        printf("%d ",element[i]);
    }
    printf("\n");
};