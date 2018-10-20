#include <stdio.h>
#include <stdlib.h>
#include "sieve.h"

int main(){
  printf("The n = 1 prime is %d \n", sieve(1));
  printf("The n = 5 prime is %d \n", sieve(5));
  printf("The n = 100 prime is %d \n", sieve(100));
  printf("The n = 500 prime is %d \n", sieve(500));
  printf("The n = 1000 prime is %d \n", sieve(1000));
  return 0;
}
