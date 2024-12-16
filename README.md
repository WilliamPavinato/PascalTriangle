# PascalTriangle

WILLIAM DE ALMEIDA PAVINATO 15/12/2024


1. Problemas com o código feito em aula

1.1. Uso Excessivo de Variáveis

    A variável numElements estava sendo usada de forma desnecessária pois é mais eficiente e preciso referenciar cada
    elemento da pilha de acordo com o seu índice de linha e de coluna.

1.2  Alocação Dinâmica Errônea

    No exercício feito em aula, o vetor returnColumnSize é alocado corretamente, porém para o resultado é criado um
    ponteiro para cada elemento da pirâmide, causando um uso excessivo de memória e maior dificuldade para uma eventual
    referência aos elementos.

1.3  Uso Equivocado das Variáveis returnSize e returnColumnSize

    No trecho de código:

    //
    for( int i = 0 ; i < *returnSize ; i++ ){
        for( int j = 0 ; j < returnColumnSizes[i] ; j++ ){

            if( j[0] || j[returnColumnSize - 1]){

                result[i][j] = 1;

            } else {

            result[i][j] = result[ i-1 ][ j-1 ] + result[ i-1 ][j];

            }

        }
    }
    //

    é utilizado o valor do ponteiro returnSize que não foi previamente especificado no código, como também é utilizada
    a variável returnColumnSize, o que nesse caso não foi usado incorretamente pois o valor de retorno nos dois casos é
    equivalente ao i, mas decidi por trocar para mais fácil compreensão do código. Vale notar também que corrigi o
    código 

    "for( int j = 0 ; j < returnColumnSizes[i] ; j++ )"

    para incluir o último elemento da linha, o qual não estava sendo incluso.


1.4 Falta de impressão dos Elementos e Liberação de memória

    No código enviado em aula não constam o output do código assim como a liberação da memória alocada para armazena-
    mento da pirâmide e para os vetores returnColumnSize e result.



2. Pontos positivos do código

    A locação e atribuição para o vetor returnColumnSize estava correta, assim como a lógica de atribuição para os 
    valores da pirâmide.



3. Casos que o código deu certo

    3.1 numRows = 3

        output: 1
                1 1
                1 2 1

    3.2 numRows = 5
    
        output: 1
                1 1       
                1 2 1     
                1 3 3 1   
                1 4 6 4 1 

    3.3 numRows = 8

        output: 1
                1 1
                1 2 1
                1 3 3 1
                1 4 6 4 1
                1 5 10 10 5 1
                1 6 15 20 15 6 1
                1 7 21 35 35 21 7 1

                
4. Considerações finais

    Acredito que os problemas encontrados no código enviado em aula são devidos principalmente ao nervosismo na hora
    da realização do trabalho. Após análise do código enviado em aula versus o código desenvolvido em casa chego a 
    conclusão que preciso voltar os meus estudos para a aplicação de ponteiros e alocação dinâmica de memória, áreas
    onde eu senti maior difuldade, para assim conseguir suceder com êxito na disciplina.




