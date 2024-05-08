#include <stdio.h>

#define Max_Size 10 // Maximum size of the array

int main() {
    int array[Max_Size] = {1, 2, 3, 4}; // Initialized array with 4 elements
    int size = sizeof(array[0]); // Current size of the array
    int newElement = 0; // Element to be added at the beginning

    // Shift existing elements to the right
    for (int i = size; i > 0; i--) {
        array[i] = array[i - 1];
    }

    // Add the new element at the first index
    array[0] = newElement;

    // Increment the size of the array
    size++;

    // Print the updated array
    printf("Updated Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
