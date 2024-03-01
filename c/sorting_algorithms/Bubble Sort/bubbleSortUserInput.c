#include <stdio.h>

int main(){
    int size;
    printf("Enter size of the array: ");
    scanf("%d",&size);

    int element[size];
    for(int i = 0; i < size - 1;i++){
        printf("Element %d: ", i);
        scanf("%d";&element[i]);
    };

    for(int i = 0; i < size;++i){
        printf("%d",element[i]);   
    }
    printf("\n");
    
    return 0;
}