#include "stdio.h"
void main()
{
    int matriz[10][20];
    int linha,coluna;
    int opcao;
    int reservalinha, reservacoluna;
    int totallivre,totalocupado;
    do
    {
        totallivre=0;
        totalocupado=0;
    printf("\n1-inicializar sala cinema");
    printf("\n2-mostrar a sala de cinema");
    printf("\n3-reserva de lugar");
    printf("\n4-contabilizar lugares livres");
    printf("\n5-sair");
    printf("\nSelecione a opcao ");
    scanf("%d", &opcao);
    if(opcao==1) //inicializar a sala
    {
        for(linha=0;linha<10;linha++)
        {
            for(coluna=0;coluna<20;coluna++){
                matriz[linha][coluna]=0; //define todos lugares como livre (0)
            }
        }
    }
    if(opcao==2) //mostra a sala
    {

        for(linha=0;linha<10;linha++)
        {
            for(coluna=0;coluna<20;coluna++){
                printf(" %d", matriz[linha][coluna]); //imprime os lugares na sala
            }
            printf("\n");
        }
    }
    if(opcao==3)
    {
        printf("informe fila: ");
        scanf("%d",&reservalinha);
        printf("informe coluna");
        scanf("%d",&reservacoluna);
        if(matriz[reservalinha][reservacoluna]==0)
        {
        matriz[reservalinha][reservacoluna]=1;
        printf("\nLugar reservado");
        }
        else
        {
            printf("Lugar ocupado");
        }
    }
    if(opcao==4)
    {
        for(linha=0;linha<10;linha++)
        {
            for(coluna=0;coluna<20;coluna++)
            {
                if(matriz[linha][coluna]==0)
                {
                    totallivre++;
                }
                else{
                    totalocupado++;
                    }
            }
        }
            printf("\nTotal lugar livre:%d",totallivre); // imprime o total de lugares livres
            printf("\nTotal lugar ocupado:%d",totalocupado); //imprime o total de lugares ocupados

    }
}while(opcao!=5); //menu seja exibido repetidamente até o usuario digitar a opção 5 para sair.
}
