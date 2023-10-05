#include <stdio.h>
#include <string.h>

int main() {
    char S[] = "Hello!";

    for (int i = 0; i < strlen(S) / 2; i++) {
        int left = i;
        int right = strlen(S) - (i + 1);

        char temp = S[left];
        S[left] = S[right];
        S[right] = temp;
    }

    printf("%s", S);
    return 0;
}