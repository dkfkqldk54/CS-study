#include <stdio.h>

int main(void) {
    int m, d, y;
    printf("Enter a date (mm/dd/yyyy): \n");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("You entered the date %.4d%.2d%.2d", y, m, d);
    return 0;
}
