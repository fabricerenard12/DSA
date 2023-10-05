#include <stdio.h>

int fun(int n) {
    if (n == 0) {
        return 0;
    } else if (n > 0) {
        return n + fun(n - 1);
    }
}
int main() {
    int r;
    r = fun(15);
    printf("Sum of n first natural numbers: %d", r);
    return 0;
}