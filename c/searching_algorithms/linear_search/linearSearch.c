#include <stdio.h>

int linearSearch(int array[],int size,int key){
    for(int i = 0; i < size; i++){
        if(array[i] == key){
            return i;
        }
    };
    return -1;
};

int main(){
    int size,key;

    // Input the size of an array.
    printf("Enter the size of an array: ");
    scanf("%d",&size);

    int array[size];
    // Input the elements of an array.
    printf("Enter %d elements:\n",size);
    for(int i=0; i < size; i++){
        printf("Element %d: ",i + 1);
        scanf("%d",&array[i]);
    }

    printf("Enter the key to search for: ");
    scanf("%d", &key);

    // Perform Linear Search
    int index = linearSearch(array,size,key);

    // Check if key is found and print the result
    if(index != -1){
        printf("The key %d is found at index %d.\n",key,index);
    }else{
        printf("The key %d is not found.\n",key);
    }

    return 0;
}