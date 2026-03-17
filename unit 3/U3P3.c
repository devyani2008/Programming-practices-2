#include <stdio.h>


int findMax(int a, int b) {
    return (a > b) ? a : b;
}


int findMin(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int x, y;
    int (*funcPtr)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);


    funcPtr = findMax;
    printf("Maximum = %d\n", funcPtr(x, y));


    funcPtr = findMin;
    printf("Minimum = %d\n", funcPtr(x, y));

    return 0;
}
