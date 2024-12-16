#include <stdio.h>
#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    if (numRows <= 0) {

        printf("O número de linhas deve ser igual ou maior que 1\n");
        return NULL;

    } else {

        // Aloca memória para armazenar o número de colunas de cada linha -> cada linha um valor
        *returnColumnSizes = (int*) malloc(numRows * sizeof(int));

        // Tamanho da matriz de retorno
        *returnSize = numRows;

        // Cria um ponteiro para cada linha do triângulo
        int** result = (int**) malloc(numRows * sizeof(int*));

        for (int i = 0; i < numRows; i++) {

            // Atribui um número de colunas para cada linha
            (*returnColumnSizes)[i] = i + 1;

            // Aloca espaço na memória para a linha atual do triângulo
            result[i] = (int*) malloc((i + 1) * sizeof(int));

        }

        // Preenche o triângulo de Pascal

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {

                // Se for o primeiro ou último valor de cada linha, é 1
                if (j == 0 || j == i) {

                    result[i][j] = 1;

                } else {

                    // Caso contrário, é a soma dos dois valores acima
                    result[i][j] = result[i - 1][j - 1] + result[i - 1][j];

                }
            }
        }

        return result;
    }
}

void PrintResult(int** result, int numRows, int* returnColumnSizes) {

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < returnColumnSizes[i]; j++) {

            printf("%d ", result[i][j]);

        }
        printf("\n");
    }
}

void FreeMemory(int** result, int numRows, int* returnColumnSizes) {

    // Liberação da memória utilizada linha por linha
    for (int i = 0; i < numRows; i++) {
        free(result[i]);
    }

    // Liberação dos ponteiros result e returnColumnSizes
    free(result);
    free(returnColumnSizes);
}

int main() {
    int numRows = 8;
    int *testReturnSize, **testReturnColumnSize;

    // Inicializa os ponteiros
    testReturnSize = (int*) malloc(sizeof(int));
    testReturnColumnSize = (int**) malloc(sizeof(int*));

    int** triangle = generate(numRows, testReturnSize, testReturnColumnSize);

    PrintResult(triangle, numRows, *testReturnColumnSize);

    FreeMemory(triangle, numRows, *testReturnColumnSize);

    free(testReturnSize);  // Libera a memória do returnSize

    return 0;
}
