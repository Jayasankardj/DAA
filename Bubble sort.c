#include <stdio.h>

void bubbleSort(int arr[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n-1; i++) 
	{
        for (j = 0; j < n-i-1; j++) 
		{
            if (arr[j] > arr[j+1]) 
			{
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    bubbleSort(arr, n);

    printf("\nSorted array: \n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
