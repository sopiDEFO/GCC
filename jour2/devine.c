#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, essai, compteur;
    char rejouer;

    do {
        srand(time(NULL));
        secret = rand() % 100 + 1;
        compteur = 0;

        printf("🎲 Devine le nombre entre 1 et 100 !\n");

        do {
            printf("Entre ton nombre : ");
            scanf("%d", &essai);
            compteur++;

            if (essai < secret) {
                printf("🔽 Trop petit !\n");
            } else if (essai > secret) {
                printf("🔼 Trop grand !\n");
            } else {
                printf("🎉 Bravo ! Tu as trouvé en %d essais.\n", compteur);
            }

        } while (essai != secret);

        printf("🔁 Veux-tu rejouer ? (o/n) : ");
        scanf(" %c", &rejouer); // espace avant %c pour capturer le retour ligne précédent

    } while (rejouer == 'o' || rejouer == 'O');

    printf("👋 Merci d'avoir joué !\n");
    return 0;
}
