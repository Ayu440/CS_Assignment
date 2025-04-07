#include <stdio.h>
#include "ayush.h"

int main() {
    
    printf("Sum: %d\n", sum(3, 4));
    printf("Difference: %d\n", diff(7, 2));
    printf("Product: %d\n", product(3, 5));
    printf("Division: %d\n", divide(10, 2));

    char buf1[1000], buf2[1000];
    pyramid(4, buf1);
    upsidedown_pyramid(4, buf2);
    printf("\nPyramid:\n%s", buf1);
    printf("\nUpside Down Pyramid:\n%s", buf2);

    int n = 121;
    if (palindrome(n))
        printf("\n%d is a palindrome\n", n);
    else
        printf("\n%d is not a palindrome\n", n);

    int arr[] = {5, 3, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, size);
    printf("\nSorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
