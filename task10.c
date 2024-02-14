#include <stdio.h>

int main() {
  FILE *file;
  int words = 0, lines = 0, characters = 0;
  char filename[100];
  char c;

  printf("Enter the filename: ");
  scanf("%s", filename);

  file = fopen(filename, "r");

  if (file == NULL) {
    printf("Could not open file %s", filename);
    return 1;
  }

  while ((c = fgetc(file)) != EOF) {
    characters++;
    if (c == ' ' || c == '\n' || c == '\t') {
      words++;
    }
    if (c == '\n') {
      lines++;
    }
  }

  if (characters > 0) {
    words++;
    lines++;
  }

  printf("Number of words: %d\n", words);
  printf("Number of lines: %d\n", lines);
  printf("Number of characters: %d\n", characters);

  fclose(file);
  return 0;
}