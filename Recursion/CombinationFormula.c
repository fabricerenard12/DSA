#include <stdio.h>

int fact(int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return n * fact(n - 1);
    }
}

int C(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    printf("%d", C(5, 3));
    return 0;
}