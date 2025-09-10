#🎬 Sistema de Reservas de Sala de Cinema (C)

Este projeto em C simula um sistema simples para gerenciamento de assentos em uma sala de cinema, permitindo a visualização, reserva e contabilização de lugares disponíveis ou ocupados.

#🧠 Funcionalidades

O programa apresenta um menu interativo com as seguintes opções:

Inicializar sala de cinema

Define todos os assentos como livres (0).

Mostrar a sala de cinema

Exibe o estado atual da sala em uma matriz 10x20:

0 → lugar livre

1 → lugar reservado

Reserva de lugar

Solicita ao usuário a linha (0–9) e coluna (0–19) do assento desejado.

Verifica se está disponível e realiza a reserva.

Contabilizar lugares livres/ocupados

Mostra a quantidade de assentos livres e ocupados.

Sair

Encerra o programa.

💻 Estrutura da Sala

A sala é representada por uma matriz de inteiros 10x20:

10 linhas (filas)

20 colunas (assentos por fila)

int matriz[10][20];


O valor armazenado em cada posição representa o estado do assento:

0 = livre

1 = ocupado
