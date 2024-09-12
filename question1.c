#include <stdio.h>
#include <stdlib.h>

int main() { 

    //initialization
    int *array;
    int capacity;

    //Ask user the number of elements
    printf("\nInput the number of elements: ");
    scanf("%d", &capacity);

    //handle case where the number of elements is zero or negative
    if (capacity == 0 || capacity < 0)
    {
       return 1;
    }
    //dynamically allocate memory
    array = (int *)malloc(capacity);

    //exception handling
    if(array == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    //fill the array with user input
    printf("\nFill the array with integers");
    for (int i = 0; i < capacity; i++){
        printf("\narray[%d] = ", i);
        scanf("%d", &array[i]);
    }

    //print the integers in reverse order
    printf("\nThese are the integers in reverse order: ");

    int length = sizeof(array)/sizeof(array[0]);
    for(int i = length; i >= 0; i--){
        printf("%d " , array[i]);
    }printf("\n");

    free(array);
    return 0;
}
