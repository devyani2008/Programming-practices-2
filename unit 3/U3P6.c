#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int sumEven = 0, sumOdd = 0;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }

    printf("Sum of even numbers = %d\n", sumEven);
    printf("Sum of odd numbers = %d\n", sumOdd);

    free(arr);

    return 0;
}
