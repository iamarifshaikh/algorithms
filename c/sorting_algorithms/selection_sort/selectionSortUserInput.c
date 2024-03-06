#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    temp = *b;
}


void selectionSort(int element[],int size){
    for(int step = 0; step < size - 1; step++){
        int minimum = step;
        for(int i = step + 1;i < size;i++){
            if(element[i] < element[minimum]){
                minimum  = i;
            }
        }
        swap(&element[minimum],&element[step]);
    }
};

    int main(){
        int size;
        printf("Enter the number of elements: ");
        scanf("%d",&size);
        
        // Taking User Input For The Elements 
        int element[size];
        printf("Enter %d elements:\n", size);
        for(int i = 0; i < size - 1;i++){
            scanf("%d ",&element[i]);
        }

        // Printing An Unsorted Array.
        printf("Original Array:\n");
        for(int i = 0; i < size;++i){
            printf("%d ",element[i]);
        };
        printf("\n");

        // Performing A Sorting Of An Array.
        selectionSort(element,size);

        // Printing A Sorted Array.
        printf("Sorted Array In An Ascending Order:\n");
        for(int i = 0; i < size;++i){
            printf("%d ",element[i]);
        };
        printf("\n");

        return 0;
    };