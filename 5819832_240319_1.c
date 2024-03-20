#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long factorial_iter(int n) {
    long result_iter = 1;
    if (n == 1 || n == 0)
        return 1;
    for (int i = 1; i <= n; i++) {
        result_iter *= i;
    }
    return result_iter;
}

long factorial_rec(int n) {
    if (n == 0)
        return (long)1;
    else
        return (n * factorial_rec(n - 1));
}

int main() {
    clock_t start_iter, stop_iter, start_rec, stop_rec;
    long result_iter, result_rec;

    start_iter = clock();
    result_iter = factorial_iter(20);
    stop_iter = clock();

    printf("Factorial Iterative Result: %ld\n", result_iter);
    printf("Time (Iterative): %f\n", (double)(stop_iter - start_iter) / CLOCKS_PER_SEC);

    start_rec = clock();
    result_rec = factorial_rec(20);
    stop_rec = clock();

    printf("Factorial Recursive Result: %ld\n", result_rec);
    printf("Time (Recursive): %f\n", (double)(stop_rec - start_rec) / CLOCKS_PER_SEC);

    return 0;
}