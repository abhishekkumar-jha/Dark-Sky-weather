// #include<stdio.h>
// int main()
// {
//     printf("Hello, World!\n");
//     return 0;
// }
// // This is a simple C program that prints "Hello, World!" to the console.

// #include <stdio.h>
// int main() {
//     for (int i = 1; i <= 10; i++) {
//         printf("%d\n", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 5, b = 7;
//     printf("Sum: %d\n", a + b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 5;
//     if (n % 2 == 0) {
//         printf("Even\n");
//     } else {
//         printf("Odd\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 10, b = 20;
//     if (a > b) {
//         printf("%d is larger\n", a);
//     } else {
//         printf("%d is larger\n", b);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 5, fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     printf("Factorial: %d\n", fact);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 10, t1 = 0, t2 = 1, nextTerm;
//     printf("Fibonacci Series: ");
//     for (int i = 1; i <= n; ++i) {
//         if (i == 1) {
//             printf("%d, ", t1);
//             continue;
//         }
//         if (i == 2) {
//             printf("%d, ", t2);
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;
//         printf("%d, ", nextTerm);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 123, reverse = 0;
//     while (n != 0) {
//         reverse = reverse * 10 + n % 10;
//         n /= 10;
//     }
//     printf("Reversed: %d\n", reverse);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 29, isPrime = 1;
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime) {
//         printf("%d is prime\n", n);
//     } else {
//         printf("%d is not prime\n", n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 5, b = 10;
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("Swapped: a = %d, b = %d\n", a, b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}, sum = 0;
//     for (int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}, temp;
//     int n = 5;
//     for (int i = 0; i < n / 2; i++) {
//         temp = arr[i];
//         arr[i] = arr[n - i - 1];
//         arr[n - i - 1] = temp;
//     }
//     printf("Reversed array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 121, original = n, reversed = 0;
//     while (n != 0) {
//         reversed = reversed * 10 + n % 10;
//         n /= 10;
//     }
//     if (original == reversed) {
//         printf("Palindrome\n");
//     } else {
//         printf("Not Palindrome\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 5;
//     for (int i = 1; i <= 10; i++) {
//         printf("%d x %d = %d\n", n, i, n * i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int year = 2024;
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("Leap Year\n");
//     } else {
//         printf("Not a Leap Year\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 56, b = 98;
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     printf("GCD: %d\n", a);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int a = 6, b = 8;
//     int gcd = 1, lcm;
//     for (int i = 1; i <= a && i <= b; i++) {
//         if (a % i == 0 && b % i == 0) {
//             gcd = i;
//         }
//     }
//     lcm = (a * b) / gcd;
//     printf("LCM: %d\n", lcm);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 12345, sum = 0;
//     while (n != 0) {
//         sum += n % 10;
//         n /= 10;
//     }
//     printf("Sum of digits: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 12345, count = 0;
//     while (n != 0) {
//         n /= 10;
//         count++;
//     }
//     printf("Digit count: %d\n", count);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int bin = 1011, decimal = 0, base = 1, rem;
//     while (bin > 0) {
//         rem = bin % 10;
//         decimal += rem * base;
//         bin /= 10;
//         base *= 2;
//     }
//     printf("Decimal: %d\n", decimal);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 13;
//     int binary[32], i = 0;
//     while (n > 0) {
//         binary[i] = n % 2;
//         n /= 2;
//         i++;
//     }
//     printf("Binary: ");
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", binary[j]);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int n = 153, sum = 0, temp = n, rem, digits = 0;
//     while (temp != 0) {
//         temp /= 10;
//         digits++;
//     }
//     temp = n;
//     while (temp != 0) {
//         rem = temp % 10;
//         sum += pow(rem, digits);
//         temp /= 10;
//     }
//     if (sum == n) {
//         printf("Armstrong number\n");
//     } else {
//         printf("Not Armstrong number\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int base = 2, exponent = 3, result = 1;
//     for (int i = 1; i <= exponent; i++) {
//         result *= base;
//     }
//     printf("Result: %d\n", result);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}, transpose[3][2];
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 3; j++) {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     printf("Transpose:\n");
//     for (int i = 0; i < 3; i++) {
//         for (int j = 0; j < 2; j++) {
//             printf("%d ", transpose[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[] = {1, 2, 3, 4, 5}, sum = 0;
//     for (int i = 0; i < 5; i++) {
//         sum += arr[i];
//     }
//     printf("Sum: %d\n", sum);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[] = {5, 3, 8, 1, 9}, min = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     printf("Minimum: %d\n", min);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int arr[] = {5, 3, 8, 1, 9}, max = arr[0];
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
//     printf("Maximum: %d\n", max);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str1[] = "Hello, ", str2[] = "World!";
//     strcat(str1, str2);
//     printf("Concatenated String: %s\n", str1);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[] = "Hello, World!";
//     printf("Length: %lu\n", strlen(str));
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char src[] = "Hello", dest[20];
//     strcpy(dest, src);
//     printf("Copied String: %s\n", dest);
//     return 0;
// }


