#include <stdio.h>

int max(int x,int y){
    return (x > y) ? x : y;
};

    // Function To Solve 0/1 Knapsack Problem.
int knapsack(int weight,int weightOfItem[],int value[],int number){
    // Base Case: If the capacity of the knapsack is 0 or the number of items is 0.
    if(number == 0 || weight == 0)
        return 0;

    //  If the weight of the nth Item is more than the capacity of the knapsack, then this item cannot be included in the optimal solution.
    if (weightOfItem[number - 1] > weight)
        return knapsack(weight,weightOfItem,value, number - 1);
    else
        return max(value[number - 1] + knapsack(weight - weightOfItem[number - 1],weightOfItem,value,number - 1),knapsack(weight,weightOfItem,value,number - 1));
};

int main(){
    // Weight Capacity Of The KnapSack.
    int weight;
    printf("Enter the weight capacity of KnapSack: ");
    scanf("%d",&weight);

    // Total Number Of An Items.
    int number;
    printf("Enter the number of items: ");
    scanf("%d", &number);

    // Weight Of An Each Item.
    int weightOfItem[number];

    // Value Of An Each Item.
    int value[number];

    // Input weights and values of an item.
    printf("Enter the weight and value of an each item:\n");
    for(int i = 0; i < number; i++){
        printf("Item %d: ", i + 1);
        scanf("%d %d", &weightOfItem[i],&value[i]);
    };

    // Solve the 0/1 Knapsack problem and print the maximum value.
    printf("Maximum Value That Can Be Obtained: %d\n",knapsack(weight,weightOfItem,value,number));
};