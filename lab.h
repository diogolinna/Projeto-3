// lab.h

#ifndef LAB_H
#define LAB_H

#include <stdio.h>

// Enum para representar os estados das tarefas
enum Estado {
    NAO_INICIADO,
    EM_ANDAMENTO,
    COMPLETO
};

// Estrutura para representar uma tarefa
struct Tarefa {
    int prioridade;
    char descricao[300];
    char categoria[100];
    enum Estado estado;
};

// Função para remover a quebra de linha de uma string
void removerQuebraLinha(char *str);

// Função para cadastrar uma nova tarefa
void cadastrarTarefa(FILE *arquivo);

// Função para listar todas as tarefas
void listarTarefas(FILE *arquivo);

// Função para deletar uma tarefa pelo número de prioridade
void deletarTarefa(FILE *arquivo);

// Função para alterar uma tarefa pelo número de prioridade
void alterarTarefa(FILE *arquivo);

#endif
