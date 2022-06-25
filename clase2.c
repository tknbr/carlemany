/*
  --- Variables ---
  char - caracter - (8 bits) - 0 a 255
  int - enteros - (16 bits) -  -32 768  a  32 767
  float - floating simple - (32 bits normalmente) 3.4E-38  a  3.4E+38
  double - floating  - (64 bits normalmente) 1.7E-308  a  1.7E+308
  void - vacio - (0bits)
  
  --- Operadores ---
  - resta
  + suma
  * multiplicacion
  / division
  % modulo
  -- decrementar 1
  ++ incrementar 1
  
  == condicion
  = asignacion
  
  --- condiciones ---
  if
  else
  switch
  
  --- bucle ---
  for
  while
  do while
*/


// librerias
#include<stdio.h>

// variables globales

int SumatorioAnteriores(int a) {
  int sumatorio = 0;
  int i;
  for(i=1; i<=a; i++)
  {
    sumatorio = sumatorio+i;
  }
  return(sumatorio);
  
}

int SumatorioAnteriores(int a) {
  int sumatorio = 0;
  int i = 1;
  while ( i <= a) {
    sumatorio = sumatorio+i;
    ++i;
  }
  return(sumatorio);
  
}


// funciones
int sumador(int a, int b) {
  return a+b;
}


int isPositive(int a) {
  if (a > 0) {
    return 1;
  } else if (a == 0) {
    return 0;
  } else {
    return -1;
  }
}



int main(int argc, char *argv[]) {
  
  int primer_numero = 3;
  int segundo_numero = 5;
  int resultado = SumatorioAnteriores(primer_numero);
  printf("El resultado es %d \n", resultado);
  
}
