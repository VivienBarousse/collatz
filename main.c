
#include <stdlib.h>
#include <stdio.h>

long long int collatzDistance(long long int n);

long long int main() {
  long long int number = 1;
  while (number > 0) {
    printf("%lld\t%lld\n", number, collatzDistance(number));
    number += 1;
  }
}

long long int collatzDistance(long long int n) {
  long long int i = 0;
  while (n != 1) {
    i += 1;
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = n * 3 + 1;
    }
  }
  return i;
}

