#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  char *token = strtok(str, " ,.-\n");
  int count = 0;

  while (token != NULL) {
    printf("%s\n", token);
    token = strtok(NULL, " ,.-\n");
    count++;
  }
  printf("Total words: %d\n", count);

  return 0;
}