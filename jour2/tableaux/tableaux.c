#include <stdio.h>

int main() {
    int notes[5] = {12, 15, 14, 8, 18};
    int somme = 0;

    for (int i = 0; i < 5; i++) {
        somme += notes[i];
    }

    float moyenne = somme / 5.0;
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}
