#include <stdio.h>

void selectionSort(int arr[], int n, int isAscending) {
    printf("before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++) {
        int extremeIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (isAscending ? (arr[j] < arr[extremeIndex]) : (arr[j] > arr[extremeIndex])) {
                extremeIndex = j;
            }
        }
        if (extremeIndex != i) {
            int temp = arr[i];
            arr[i] = arr[extremeIndex];
            arr[extremeIndex] = temp;

            printf("Step %d: ", i + 1);
            for (int k = 0; k < n; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }

    printf("after: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, isAscending;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sort in ascending (1) or descending (0) order? ");
    scanf("%d", &isAscending);

    selectionSort(arr, n, isAscending);

    return 0;
}

