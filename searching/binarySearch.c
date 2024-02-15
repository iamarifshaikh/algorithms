#include <stdio.h>

int binarySearch(int element[],int size, int key){
    int low = 0;
    int high = size - 1;

    while(low<=high){
        int middle = low + (high - low) / 2;
        if(element[middle]==key){
            return middle;
        }else if(element[middle] < key){
            low = middle + 1;
        }else if(element[middle] > key){
            high = middle - 1;
        }else{
            return -1;
        };
    };
};

int main(){
    int element[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; // 
    int size = sizeof(element) / sizeof(element[0]);
    
    int key = 1;

    int result = binarySearch(element,size,key);
    printf("Found  %d at index %d\n",key,result);

    return 0;
};