#include <stdio.h>
#include <stdlib.h>

int main() {
    int initialSize = 5;
    int* array = malloc(initialSize * sizeof(int));
    int count = 0;
    int i;

    // Append values to the array
    for (i = 0; i < 10; i++) {
        // Check if the array is full and reallocate memory if necessary
        if (count == initialSize) {
            initialSize *= 2; // Double the size
            array = realloc(array, initialSize * sizeof(int));
        }

        // Append a new value to the array
        array[count] = i;
        count++;
    }

    // Print the appended array
    for (i = 0; i < count; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the memory allocated for the array
    free(array);

    return 0;
}
