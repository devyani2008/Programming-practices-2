#include <stdio.h>
#include <stdlib.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int sum = 0;

    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sum += arr[i];
        }
    }

    printf("%d\n", sum);

    free(arr);

    return 0;
}
