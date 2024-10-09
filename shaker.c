#include <stdio.h>

#define MAX_SIZE 100

void shaker_sort(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    int temp;

    while (left < right) {
        for (int i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        right--;

        for (int i = right; i > left; i--) {
            if (arr[i - 1] > arr[i]) {
                temp = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = temp;
            }
        }
        left++;
    }
}

int main() {
    int n;
    int arr[MAX_SIZE];

    printf("Enter the size of the array: ", MAX_SIZE);
    scanf_s("%d", &n);

    if (n > MAX_SIZE || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    shaker_sort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
