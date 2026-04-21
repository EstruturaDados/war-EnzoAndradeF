#include <stdio.h>

 typedef struct {
    char nome[20];
    char cor[20];
    int tropas;
 } Territorio;

 int main(){

    printf("========== WAR ==========\n\n\n");
    printf("Preencha as informações sobre o território 1\n\n");

    Territorio territorio1;

    printf("Digite o nome do território 1: ");
    scanf("%s", territorio1.nome);

    printf("Digite a cor do território 1: ");
    scanf("%s", territorio1.cor);

    printf("Digite a quantidade de tropas para o território 1: ");
    scanf("%d", &territorio1.tropas);

    printf("Preencha as informações sobre o território 2\n\n");

    Territorio territorio2;

    printf("Digite o nome do território 2: ");
    scanf("%s", territorio2.nome);

    printf("Digite a cor do território 2: ");
    scanf("%s", territorio2.cor);

    printf("Digite a quantidade de tropas para o território 2: ");
    scanf("%d", &territorio2.tropas);

    printf("Preencha as informações sobre o território 3\n\n");

    Territorio territorio3;

    printf("Digite o nome do território 3: ");
    scanf("%s", territorio3.nome);

    printf("Digite a cor do território 3: ");
    scanf("%s", territorio3.cor);

    printf("Digite a quantidade de tropas para o território 3: ");
    scanf("%d", &territorio3.tropas);

    printf("Preencha as informações sobre o território 4\n\n");

    Territorio territorio4;

    printf("Digite o nome do território 4: ");
    scanf("%s", territorio4.nome);

    printf("Digite a cor do território 4: ");
    scanf("%s", territorio4.cor);

    printf("Digite a quantidade de tropas para o território 4: ");
    scanf("%d", &territorio4.tropas);

    printf("Preencha as informações sobre o território 5\n\n");

    Territorio territorio5;

    printf("Digite o nome do território 5: ");
    scanf("%s", territorio5.nome);

    printf("Digite a cor do território 5: ");
    scanf("%s", territorio5.cor);

    printf("Digite a quantidade de tropas para o território 5: \n\n");
    scanf("%d", &territorio5.tropas);

    printf("========== Lista do mapa==========\n\n");

    printf("Território 1: %s\n", territorio1.nome);
    printf("Cor: %s\n", territorio1.cor);
    printf("Quantidade de tropas: %d\n\n", territorio1.tropas);

    printf("Território 2: %s\n", territorio2.nome);
    printf("Cor: %s\n", territorio2.cor);
    printf("Quantidade de tropas: %d\n\n", territorio2.tropas);

    printf("Território 3: %s\n", territorio3.nome);
    printf("Cor: %s\n", territorio3.cor);
    printf("Quantidade de tropas: %d\n\n", territorio3.tropas);

    printf("Território 4: %s\n", territorio4.nome);
    printf("Cor: %s\n", territorio4.cor);
    printf("Quantidade de tropas: %d\n\n", territorio4.tropas);

    printf("Território 5: %s\n", territorio5.nome);
    printf("Cor: %s\n", territorio5.cor);
    printf("Quantidade de tropas: %d\n\n", territorio5.tropas);

    return 0;
 }