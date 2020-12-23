// https://www.codewars.com/kata/5262119038c0985a5b00029f

#include <stdbool.h>

bool is_prime(int num) {
  for(int i = 2; i < num; i++) {
    if(num % i == 0) {
      return false;
    }
  }
  
  return num > 1;
}
