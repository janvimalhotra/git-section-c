#include <stdio.h>

int main() {
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;        // store original value
    int sign = 1;

    if (num < 0) {             // handle negative numbers
        sign = -1;
        num = -num;
    }

    while (num != 0) {
        rem = num % 10;        // get last digit
        rev = rev * 10 + rem;  // append digit to reversed number
        num /= 10;             // remove last digit
    }

    rev = rev * sign;          // restore sign if negative

    printf("Reversed number: %d\n", rev);

    return 0;
}
