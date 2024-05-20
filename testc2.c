#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add two large numbers represented as strings
char* addition(const char* a, const char* b) {
    // Ensure both strings are of equal length by prepending zeros to the shorter string
    int len_a = strlen(a);
    int len_b = strlen(b);
    int max_len = len_a > len_b ? len_a : len_b;

    char* a_padded = (char*)malloc(max_len + 1);
    char* b_padded = (char*)malloc(max_len + 1);
    for (int i = 0; i < max_len - len_a; ++i) a_padded[i] = '0';
    strcpy(a_padded + max_len - len_a, a);
    for (int i = 0; i < max_len - len_b; ++i) b_padded[i] = '0';
    strcpy(b_padded + max_len - len_b, b);

    char* sum = (char*)malloc(max_len + 2); // +1 for carry, +1 for '\0'
    sum[max_len + 1] = '\0';
    int carry = 0;

    // Start from the end of the strings and add corresponding digits
    for (int i = max_len - 1; i >= 0; --i) {
        int sum1 = (a_padded[i] - '0') + (b_padded[i] - '0') + carry;
        sum[i + 1] = (sum1 % 10) + '0';
        carry = sum1 / 10;
    }

    // If there's a carry left after the final addition, add it to the sum
    if (carry) {
        sum[0] = carry + '0';
        free(a_padded);
        free(b_padded);
        return sum;
    } else {
        char* result = strdup(sum + 1);
        free(a_padded);
        free(b_padded);
        free(sum);
        return result;
    }
}

// Function to duplicate a string (similar to strdup)
char* strdup(const char* s) {
    char* d = malloc(strlen(s) + 1); // Allocate memory
    if (d == NULL) return NULL; // Memory allocation failed
    strcpy(d, s); // Copy the string
    return d;
}

char* F[1001];

// Function to calculate Fibonacci numbers up to F[1000]
void Fibo() {
    F[0] = strdup("0");
    F[1] = strdup("1");
    for (int i = 2; i <= 1000; i++) {
        F[i] = addition(F[i - 1], F[i - 2]);
    }
}

int main() {
    Fibo();
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        printf("%s\n", F[n]);
    }

    // Free allocated memory
    for (int i = 0; i <= 1000; ++i) {
        free(F[i]);
    }

    return 0;
}
