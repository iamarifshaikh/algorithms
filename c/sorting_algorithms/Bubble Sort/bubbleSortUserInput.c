#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *array,int size){
    for(int i = 0;i < size - 1;i++){
        for(int j = 0;j < size - i - 1;j++){
            // Swap if the element found is greater than the next element in the array
            if(*(array + j) > *(array + j + 1)){
                int temp = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j + 1) = temp;
            };
        };
    };
};

int main(){
    int size;
    
    // Taking input size of the array
    printf("Enter size of the array: ");
    scanf("%d",&size);

    // Dynamically allocate memory for the array
    int *array = (int *)malloc(size * sizeof(int));
    if(array == NULL){
        printf("Memory Allocation Failed\n");
        return 1;
    };

    // Input the elements of the array according to the size of the array
    printf("Enter %d elements:\n",size);
    for(int i = 0;i < size;i++){
        printf("Element %d: ",i + 1);
        scanf("%d",array + i);
    };

    // Perform BubbleSort
    BubbleSort(array,size);

    // Print the sorted array
    printf("Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");

    // Free dynamically allocated memory.
    free(array);

    return 0;
};