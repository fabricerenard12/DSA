#include <stdio.h>

int main() {
    char S[] = "welcome";
    int length = 0;

    while (S[length] != '\0') {
        length++;
    }

    printf("Length: %d", length);
    return 0;
}