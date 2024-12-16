
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
  
  //o tamanho do array é o returnSize
  //o tamanho das colunas é o array returnColumnSizes

  int numElements = numRow;
  returnSize = &numRow;

  for( int i = numRow-1 ; i = 1 ; i-- ){
    numElements += 1;
  }

  int **result = (int **) malloc ( sizeof(int) * numElemnts );

  returnColumnSizes = (int **) malloc ( sizeof(int) * (returnSize) );


  for( int i = 0 ; i < numRow ; i++){
    
    returnColumnSizes[i] = i + 1;

  }



  for( int i = 0 ; i < *returnSize ; i++ ){
    for( int j = 0 ; j < returnColumnSizes[i] ; j++ ){

        if( j[0] || j[returnColumnSize - 1]){

            result[i][j] = 1;

        } else {

        result[i][j] = result[ i-1 ][ j-1 ] + result[ i-1 ][j];

        }

    }
  }



}
