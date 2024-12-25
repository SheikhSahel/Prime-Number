#include <stdio.h>
#include <stdbool.h>

// Function prototype
bool is_prime(int num);

int main() {
    int num;

    printf("Enter a number to check if it is prime: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Function to check if a number is prime
bool is_prime(int num) {
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
