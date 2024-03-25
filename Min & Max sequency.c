#include <stdio.h>

void findMinMaxSequence(int arr[], int size) {
    if (size <= 0) {
        printf("Empty list\n");
        return;
    }

    int minSequence = arr[0]; 
    int maxSequence = arr[0]; 
    int i;
    for ( i = 1; i < size; i++) {
        if (arr[i] < minSequence) {
            minSequence = arr[i];
            printf("New minimum sequence: %d\n", minSequence);
        } else if (arr[i] > maxSequence) {
            maxSequence = arr[i];
            printf("New maximum sequence: %d\n", maxSequence);
        }
    }
}

int main() {
    int arr[] = {3, 10, 5, 8, 2, 15, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Input List:\n");
    for ( i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("\nMinimum and Maximum Value Sequences:\n");
    findMinMaxSequence(arr, size);

    return 0;
}
