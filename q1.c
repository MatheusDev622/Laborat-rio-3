#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int not_repeat(int i_size, int vetor[]) {
    int count = 0;

    for (int i = 0; i < i_size; i++) {
        for (int j = i + 1; j < i_size; j++) {
            if (vetor[i] == vetor[j]) {
                count++;
                break;  
            }
        }
    }

    return i_size - count;
}

int main() {
    int i_size = 10;
    int vetor[10];
    srand(time(NULL));

    printf("Vetor inicial:\n");
    for (int i = 0; i < i_size; i++) {
        vetor[i] = rand() % 11;  
        printf("%d ", vetor[i]);
    }

    int n_size = not_repeat(i_size, vetor);
    printf("\n\nO novo tamanho do seu vetor vale: %d\n", n_size);
    puts("Vetor Final");
    for(int i = 0;i<n_size;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}
