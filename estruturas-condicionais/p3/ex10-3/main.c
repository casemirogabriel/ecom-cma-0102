#include <stdio.h>
#include <stdlib.h>

int main() {
    int hi, mi, si;
    int hf, mf, sf;

    printf("Digite o horario inicial da ligacao (hh mm ss): ");
    scanf("%i%i%i", &hi, &mi, &si);

    printf("Digite o horario final da ligacao (hh mm ss): ");
    scanf("%i%i%i", &hf, &mf, &sf);

    int dh = hf - hi;
    int dm = mf - mi;
    int ds = sf - si;

    if (ds < 0) {
        ds += 60;
        dm--;
    }

    if (dm < 0) {
        dm += 60;
        dh--;
    }

    printf("Tempo total de ligacao: %i:%i:%i\n", dh, dm, ds);

    return 0;
}
