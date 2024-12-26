#include <stdio.h>

int sapxep(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int find(int arr[], int n, int find) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == find) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n = 6;
    int findValue;
    int arr[6] = {1, 5, 4, 6, 7, 3};

    sapxep(arr, n);
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap so can tim: ");
    scanf("%d", &findValue);

    int result = find(arr, n, findValue);
    if (result != -1) {
        printf("So %d tim thay tai chi so %d\n", findValue, result);
    } else {
        printf("So %d khong tim thay trong mang\n", findValue);
    }

    return 0;
}

