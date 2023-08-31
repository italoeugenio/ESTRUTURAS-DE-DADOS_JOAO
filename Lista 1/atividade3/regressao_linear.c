#include <stdio.h>
#include <stdlib.h>

struct Ponto {
    int coordenadaX;
    float coordenadaY;
};

int main(int argc, char *argv[]) {
    (void)argc;

    int x = 0;
    float y = 0;
    int quantidade = 0;

    FILE *arquivo;
    arquivo = fopen(argv[1], "r");

    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    // 1. Contagem da quantidade de registros
    while (fscanf(arquivo, "%i,%f", &x, &y) != EOF) {
        quantidade++;
    }

    // Reset das variáveis
    x = 0;
    y = 0;

    // Reposiciona o cursor para o início do arquivo
    fseek(arquivo, 0, SEEK_SET);

    // Alocação dinâmica do array de pontos
    struct Ponto *pontos = (struct Ponto *)malloc(quantidade * sizeof(struct Ponto));
    if (pontos == NULL) {
        printf("Erro ao alocar memória");
        fclose(arquivo);
        return 1;
    }

    // 2. Leitura dos pontos
    for (int i = 0; i < quantidade; i++) {
        fscanf(arquivo, "%i,%f", &pontos[i].coordenadaX, &pontos[i].coordenadaY);
        while (fgetc(arquivo) != '\n');
    }

    fclose(arquivo);

    // 3. Cálculo das médias
    int totalX = 0;
    float totalY = 0;
    for (int i = 0; i < quantidade; i++) {
        totalX += pontos[i].coordenadaX;
        totalY += pontos[i].coordenadaY;
    }

    float mediaX = (float)totalX / quantidade;
    float mediaY = totalY / quantidade;

    // 4. Cálculo da inclinação da reta de regressão
    float somaXY = 0, somaXX = 0;
    for (int i = 0; i < quantidade; i++) {
        somaXY += (pontos[i].coordenadaX - mediaX) * (pontos[i].coordenadaY - mediaY);
        somaXX += (pontos[i].coordenadaX - mediaX) * (pontos[i].coordenadaX - mediaX);
    }

    float inclinacao = somaXY / somaXX;

    // 5. Cálculo da intercepção da reta de regressão
    float intercepcao = mediaY - inclinacao * mediaX;

    // Exibição dos resultados da equação da regressão linear
    printf("Quantidade de registros = %d\n", quantidade);
    printf("Media X = %.2f, Media Y = %.2f\n", mediaX, mediaY);
    printf("Inclinacao = %.2f\n", inclinacao);
    printf("Intercepcao = %.2f\n", intercepcao);
    printf("Resultado Final: Y = %.2f * X + %.2f\n", inclinacao, intercepcao);

    // Liberação da memória alocada
    free(pontos);

    return 0;
    /*   gcc regressao_linear.c -o regressao_linear
        ./regressao_linear dados.csv
    */
}
