//#include <stdlib.h>
//#include <errno.h>


float * memoriaArray(int len){
  float *array;
  array = (float *)calloc(len, sizeof(float));
  if(!array){
    perror("calloc");
    exit(EXIT_FAILURE);
  }
  return array;
}

void reasignarMemoria(float *vect){
  
}

void freeMemory(float *vect){
  free(vect);
}