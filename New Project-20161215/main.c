#include <stdio.h>
#include <stdlib.h>

int main() {
  int anyo;
  char * nombre;
  
  nombre = (char *)malloc(100*sizeof(char));
  
  printf("Enter year you were born: \n");
  scanf(" %4d", &anyo);
  printf("Enter your name: \n");
  scanf(" %s", nombre);
  
  printf("Your name is %s and you are %d years old. \n", nombre, 2016-anyo);
  free(nombre);
    
}