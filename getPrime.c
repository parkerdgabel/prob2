#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num % 2 == 0)
        return 0;
    for (int i = 3; i < (int) sqrt(num) + 1; i = i + 2) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num = 0;
    scanf("%d", &num);
    if (num < 0) {
        fprintf(stderr, "Num must be a positive integer");
        return 1;
    }
    num++;
    while (1) {
        if (isPrime(num)) {
            printf("%d\n", num);
            break;
        }
        num++;
    }
    return 0;
}