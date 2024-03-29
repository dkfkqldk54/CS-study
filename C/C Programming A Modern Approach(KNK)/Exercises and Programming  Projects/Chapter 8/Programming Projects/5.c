#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00

int main(void) {

  int i, j, num_years, year;
  double low_rate, value[5];

  printf("Enter interest rate: ");
  scanf("%lf", &low_rate);

  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  for (i = 0; i < NUM_RATES; i++) {
    printf("%6lf%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for (year = 1; year <= num_years; year++) {
    printf("%3d     ", year);
    for (i=0; i < NUM_RATES; i++) {
      for (j=0; j<12; j++) {
        value[i] += (low_rate + i) / 12 / 100 * value[i];
      }
      printf("%7.2f", value[i]);
    }
    printf("\n");
  }
  
  return 0;
}
