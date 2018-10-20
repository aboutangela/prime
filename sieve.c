#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sieve.h"

int sieve(int tar){
  int len = (int)(tar * log((double)tar) * 1.15);
  //printf("%d \n", len);
  int * con = malloc(len);
  int count = 0; //how many primes
  int current = 1; //current index
  while(count < tar){
    current++;
    if(!con[current]){
      count++;
      //printf("%d \n", current);
      int twice = current * 2;
      while(twice < len){
        //printf("%d, %d \n", current, twice);
        if(!con[twice])
          con[twice] = 1;
        twice += current;
      }
    }
  }
  return current;
}
