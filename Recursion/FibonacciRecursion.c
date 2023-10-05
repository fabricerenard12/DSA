#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int mfib(int n, int* tab) {
    if (n <= 1) {
        tab[n] = n;
        return n;
    }

    if (tab[n - 1] == -1) {
        tab[n - 1] = mfib(n - 1, tab);
    }

    if (tab[n - 2] == -1) {
        tab[n - 2] = mfib(n - 2, tab);
    }

    return tab[n - 2] + tab[n - 1];
}

int fib2(int n) {
    int F[n];
    for (int i = 0; i < n; i++) {
        F[i] = -1;
    }
    return mfib(n, F);
}

int main() {
    printf("%d", fib2(9));
    return 0;
}