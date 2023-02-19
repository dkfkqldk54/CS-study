#include <stdio.h>
#include <strings.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[]) 
{
  char *planets[] = {"Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto"};

  int i, j;

  for (i = 1; i < argc; i++) {
    int found = 0;
    for (j = 0; j < NUM_PLANETS; j++) {
      if (strcasecmp(argv[i], planets[j]) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        found = 1;
        break;
      }
    }

    if (!found)
      printf("%s is not a planet\n", argv[i]);
  }

  return 0;
}

Is there any error?
