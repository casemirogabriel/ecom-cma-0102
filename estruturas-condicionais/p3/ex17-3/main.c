#include <stdio.h>

int main() {
    int di, mi, ai;
    int df, mf, af;

    printf("Digite a data de nascimento (dd mm aa): ");
    scanf("%i%i%i", &di, &mi, &ai);

    printf("Digite a data de hoje (dd mm aa): ");
    scanf("%i%i%i", &df, &mf, &af);

    int dd = df - di;
    int dm = mf - mi;
    int da = af - ai;

    if (dd < 0) {
        dd += 30;
        dm--;
    }

    if (dm < 0) {
        dm += 12;
        da--;
    }

    printf("Idade: %i anos, %i meses e %i dias\n", da, dm, dd);

    return 0;
}
