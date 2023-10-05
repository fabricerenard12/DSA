#include <stdio.h>
#include <string.h>

int main() {
    char S[] = "WeLcOme";
    for (int i = 0; i < strlen(S); i++) {
        if (S[i] >= 65 && S[i] <= 90) {
            S[i] += 32;
            continue;
        }

        if (S[i] >= 97 && S[i] <= 122) {
            S[i] -= 32;
            continue;
        }
    }

    printf("%s", S);
    return 0;
}