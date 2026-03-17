#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);


    float *arr = (float *)malloc(n * sizeof(float));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);


    free(arr);

    return 0;
}
