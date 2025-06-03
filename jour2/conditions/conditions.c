#include <stdio.h>

int main() {
    int note;
    printf("Entrez votre note : ");
    scanf("%d", &note);

    if (note >= 10) {
        printf("Admis\n");
    } else {
        printf("Ajourné\n");
    }

    return 0;
}
