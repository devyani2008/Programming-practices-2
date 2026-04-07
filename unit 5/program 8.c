// Program to sort elements in ascending order using merge sort
#include <stdio.h>

void merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= high)
        temp[k++] = arr[j++];

    for(i = low; i <= high; i++)
        arr[i] = temp[i];
}

void mergesort(int arr[], int low, int high) {
    int mid;
    if(low < high) {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, n - 1);

    printf("Sorted elements in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
