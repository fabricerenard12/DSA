#include <stdio.h>

int fun(int n) {
    if (n == 0) {
        return 1;
    } else if (n > 0) {
        return n * fun(n - 1);
    }
}

int main() {
    int r;
    r = fun(7);
    printf("Factorial: %d", r);
    return 0;
}