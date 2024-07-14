#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) return false;  // Negative numbers are not palindromes

    int original = x;
    long reversed = 0; // Use long to handle overflow


    while (x != 0) {
        int digit = x % 10;   // Get the last digit
        reversed = reversed * 10 + digit;  // Append the digit to the reversed number
        x /= 10;  // Remove the last digit from x
    }

    return original == reversed;
}

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (isPalindrome(x)) {
        printf("%d is a palindrome.\n", x);
    } else {
        printf("%d is not a palindrome.\n", x);
    }

    return 0;
}
