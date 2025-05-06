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
