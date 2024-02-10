#include <stdio.h>

// Function to find maximum of two integers.
int max(int x, int y){
    return(x > y) ? x : y;
};

// Function to solve 0/1 Knapsack Problem.
int knapsack(int weight,int weightOfItem[],int value[],int number){
    // Base Case: If the capacity of the knapsack is 0 or the number of items is 0.
    if(number == 0 || weight == 0)
       return 0;
    // If the weight of the nth item is more than the capacity of the knapsack, then this item cannot be included in the optimal solution
    if(weightOfItem[number - 1] >= weight)
        return knapsack(weight,weightOfItem,value, number - 1);
    else
        return max(value[number - 1] + knapsack(weight - weightOfItem[number - 1],weightOfItem,value,number -1),knapsack(weight,weightOfItem,value,number - 1));
};

int main(){
    // Weight capacity of the knapsack.	    
    int weight = 50;
    
    // Weight Of An Each Term.
    int weightOfItem[] = {20,30,15,10};
    
    // Value Of An Item.
    int value[] = {50,30,60,100};
    
    // Number Of Item.
    int number = sizeof(weightOfItem) / sizeof(weightOfItem[0]);    
    
    // Solve the 0/1 Knapsack problem and print the maximum value.
    printf("Maximum Value that can be obtained %d\n",knapsack(weight,weightOfItem,value,number));
};
