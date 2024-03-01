#include <stdio.h>

// Function to find the maximum element in an array using divide and conquer.
int findMax(int element[],int low,int high){
    if(low == high){
        return element[low]; // If only one element is there then return that element.
    }
    int middle = (low + high) / 2;

    int maxLeft = findMax(element,low,middle);
    int maxRight = findMax(element,middle + 1,high);

    return maxLeft > maxRight ? maxLeft : maxRight; // Return the larger of two maxima.
};

int main(){
    int element[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int size = sizeof(element) / sizeof(element[0]);

    // Find the maximum element in the array using a function 
    int maxElement = findMax(element,0,size - 1);
    printf("The maximum element in the array is %d",maxElement);
    
    return 0;
};