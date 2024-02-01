#include <stdio.h>
#include <math.h>

// Function to count number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is a Kaprekar number
int isKaprekar(int n) {
    long long square = (long long)n * n;
    int numDigits = countDigits(n);
    long long divisor = pow(10, numDigits);
    long long sum = square / divisor + square % divisor;

    return sum == n && square % divisor != 0 && square / divisor != 0;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isKaprekar(num)) {
        printf("%d is a Kaprekar number.\n", num);
    } else {
        printf("%d is not a Kaprekar number.\n", num);
    }

    return 0;
}