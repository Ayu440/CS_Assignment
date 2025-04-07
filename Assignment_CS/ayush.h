#pragma once  // Simple and modern way to avoid multiple inclusion

int sum(int a, int b) {
    return a + b;
}

int diff(int a, int b) {
    return a - b;
}

int product(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    return 0;
}

char* pyramid(int n, char* buffer) {
    int index = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            buffer[index++] = ' ';
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            buffer[index++] = '*';
        }
        buffer[index++] = '\n';
    }
    buffer[index] = '\0';
    return buffer;
}

char* upsidedown_pyramid(int n, char* buffer) {
    int index = 0;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            buffer[index++] = ' ';
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            buffer[index++] = '*';
        }
        buffer[index++] = '\n';
    }
    buffer[index] = '\0';
    return buffer;
}

int palindrome(int n) {
    int rev = 0, rem, temp = n;
    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    return (rev == temp);
}

int bubble_sort(int arr[], int n) {
    for (int j = 0; j < n - 1; j++) {
        int swapped = 0;
        for (int k = 0; k < n - j - 1; k++) {
            if (arr[k] > arr[k + 1]) {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
                swapped = 1;
            }
        }
        if (!swapped) break;
    }
    return 0;
}
