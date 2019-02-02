/*
* File: getPrime.c
* Author: Parker Gabel
* Purpose: Finds the smallest prime number larger than the input number
*/
#include <stdio.h>
#include <math.h>

/*
 * Checks if a number is prime or not
 * params: num          positive number
 * return               1 if the number is prime. 0 otherwise
 */
int isPrime(int num) {
    if (num % 2 == 0)
        return 0;
    for (int i = 3; i < (int) sqrt(num) + 1; i = i + 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

/*
 *  Finds the smallest prime number greater than the positive integer given
 */
int main() {
    int num = 0;
    if (scanf("%d", &num) == 0) {
        fprintf(stderr, "Error reading input\n");
        return 1;
    } else if (num < 0) {
        fprintf(stderr, "Error: %d is not a positive number\n", num);
        return 1;
    } else {
        num++;
        while (1) {
            if (isPrime(num)) {
                printf("%d\n", num);
                break;
            }
            num++;
        }
    }
    return 0;
}