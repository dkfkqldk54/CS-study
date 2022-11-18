#include <stdio.h>

int main(void) {

  int digit_seen[10], digit;
  long n;

  while (1) {
    int digit_seen[10] = {0};
    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n<=0) break;

    while (n>0) {
      digit = n % 10;
      if (digit_seen[digit]) break;
      digit_seen[digit] = 1;
      n /= 10;
    }

    if (n>0) printf("Repeated digit\n");
    else printf("No repeated digit\n");
  }
  
  return 0;
}
