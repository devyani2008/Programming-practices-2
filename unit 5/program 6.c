// Program to sort elements in ascending order using shell sort
#include <stdio.h>

int main() {
    int arr[100], n, i, j, gap, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Shell sort
    for(gap = n / 2; gap > 0; gap = gap / 2) {
        for(i = gap; i < n; i++) {
            temp = arr[i];
            for(j = i; j >= gap && arr[j - gap] > temp; j = j - gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }

    printf("Sorted elements in ascending order:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
