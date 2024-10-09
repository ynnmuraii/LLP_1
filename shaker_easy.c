#include <stdio.h>

#define MAX_SIZE 100

void shaker_sort2(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    int temp;
    int i;

sort_start:
    if (left >= right) goto sort_end;
    i = left;

for_loop1_start:
    if (i >= right) goto for_loop1_end;
    if (!(arr[i] > arr[i + 1])) goto no_swap1;
    temp = arr[i];
    arr[i] = arr[i + 1];
    arr[i + 1] = temp;

no_swap1:
    i++;
    goto for_loop1_start;

for_loop1_end:
    right--;
    i = right;

for_loop2_start:
    if (i <= left) goto for_loop2_end;

    if (!(arr[i - 1] > arr[i])) goto no_swap2;
    temp = arr[i - 1];
    arr[i - 1] = arr[i];
    arr[i] = temp;

no_swap2:
    i--;
    goto for_loop2_start;

for_loop2_end:
    left++;
    goto sort_start;

sort_end:
    return;
}

int main2() {
    int n;
    int arr[MAX_SIZE];

    printf("Enter the size of the array (no more than %d): ", MAX_SIZE);
    scanf_s("%d", &n);

    if (!(n <= MAX_SIZE && n > 0)) goto invalid_size;
    goto valid_size;

invalid_size:
    printf("Invalid array size.\n");
    return 1;

valid_size:
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &arr[i]);
    }

    shaker_sort2(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
