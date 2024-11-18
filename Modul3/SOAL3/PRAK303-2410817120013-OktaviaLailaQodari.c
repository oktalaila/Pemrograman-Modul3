#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N > 0) {
        printf("positif");
    }
    if (N < 0) {
        printf("negatif");
    }
    if (N == 0) {
        printf("nol");
    }
    return 0;
}