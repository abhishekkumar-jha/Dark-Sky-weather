#include<stdio.h>
int main()
{
    printf("Hello, World!\n");
    return 0;
}
// This is a simple C program that prints "Hello, World!" to the console.

#include <stdio.h>
int main() {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a = 5, b = 7;
    printf("Sum: %d\n", a + b);
    return 0;
}

#include <stdio.h>
int main() {
    int n = 5;
    if (n % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
    return 0;
}

#include <stdio.h>
int main() {
    int a = 10, b = 20;
    if (a > b) {
        printf("%d is larger\n", a);
    } else {
        printf("%d is larger\n", b);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n = 5, fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial: %d\n", fact);
    return 0;
}

#include <stdio.h>
int main() {
    int n = 10, t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%d, ", t1);
            continue;
        }
        if (i == 2) {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d, ", nextTerm);
    }
    return 0;
}

#include <stdio.h>
int main() {
    int n = 123, reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("Reversed: %d\n", reverse);
    return 0;
}

