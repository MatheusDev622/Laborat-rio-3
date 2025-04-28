#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 5

void embaralhar(int vetor[TAM], int n) {
    srand(time(NULL));

    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);  
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
}

int main() {
   int vetor[TAM];
   int n = TAM; 
   srand(time(NULL));

   for(int i = 0;i<TAM;i++){
        vetor[i] = rand()%15;
   }
    printf("Vetor original:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    embaralhar(vetor, n);

    printf("\n\nVetor embaralhado:\n");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
