#include <stdio.h>

void bubbleSort(int elements[],int size){
    // Loop to access each element in an array.
    for(int step = 0; step < size - 1; ++step){
        // Loop to compare each element in an array.
        for(int i = 0; i < size - step - 1; ++i){
            if(elements[i] > elements[i + 1]){
                int temp = elements[i];
                elements[i] = elements[i + 1];
                elements[i + 1] = temp;
            };
        };
    };
};

int main(){
    int elements[] = {5,18,0,-3,28,-2};

    int size = sizeof(elements) / sizeof(elements[0]);

    // Print Original Array
    printf("Original Array: \n");
     for (int i = 0; i < size; ++i) {
        printf("%d  ", elements[i]);
    }   
    printf("\n");

    bubbleSort(elements, size); 

    // Print Sorted Array 
    printf("Sorted Elements In An Ascending Order: \n");
 
    for (int i = 0; i < size; ++i) {
        printf("%d  ", elements[i]);
    }   
    printf("\n");
};