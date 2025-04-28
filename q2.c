#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int ger_vet(int vetor[TAM], int i) {
    int num, igual;

    for (int tentativa = i; tentativa < TAM; tentativa++) {
        num = rand() % 101; 
        igual = 0;

        for (int j = 0; j < i; j++) {
            if (vetor[j] == num) {
                igual = 1;
                break;
            }
        }

        if (!igual) {
            return num;
        }
    }

}

int main() {
    int vetor[TAM];
    char opcao;

    srand(time(NULL)); 

    puts("Digite (S) para adicionar um número ao vetor ou (N) para encerrar o programa");

    for (int i = 0; i < TAM; i++) {
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'S':
            case 's':
                vetor[i] = ger_vet(vetor, i);
                printf("Número adicionado ao vetor: %d\n", vetor[i]);

                break;

            case 'N':
            case 'n':
                puts("Encerrando o programa.\n");
                return 0;

            default:
                printf("Opção inválida. Digite apenas (S) ou (N).\n");
                i--; 
                break;
        }
    }

    printf("Vetor cheio!\n");

    return 0;
}
