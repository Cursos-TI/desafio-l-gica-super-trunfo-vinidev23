#include <stdio.h>
#include <string.h>

struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {

    struct Territorio lista_de_territorios[5];
    int i;

    printf("--- Cadastro de 5 Territorios ---\n\n");
    for (i = 0; i < 5; i++) {
        printf("Territorio %d:\n", i + 1);

        printf("Nome: ");
        scanf("%s", lista_de_territorios[i].nome);

        printf("Cor do exercito: ");
        scanf("%s", lista_de_territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &lista_de_territorios[i].tropas);
        printf("\n");
    }


    return 0;
}
