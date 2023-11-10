// main.c

#include <stdio.h>
#include "lab.h"

int main() {
    // Abrir o arquivo em modo leitura e gravação binária (rb+)
    FILE *arquivo = fopen("tarefas.dat", "rb+");

    // Se o arquivo não existir, criar em modo leitura e gravação binária (wb+)
    if (arquivo == NULL) {
        arquivo = fopen("tarefas.dat", "wb+");
        if (arquivo == NULL) {
            perror("Erro ao criar ou abrir arquivo de tarefas");
            return 1;
        }
    }

    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Cadastrar Tarefa\n");
        printf("2. Listar Tarefas\n");
        printf("3. Deletar Tarefa\n");
        printf("4. Alterar Tarefa\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarTarefa(arquivo);
                break;
            case 2:
                listarTarefas(arquivo);
                break;
            case 3:
                deletarTarefa(arquivo);
                break;
            case 4:
                alterarTarefa(arquivo);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    // Fechar o arquivo no final do programa
    fclose(arquivo);

    return 0;
}
