
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

void removeNewLine(char *word) {
    int len = strlen(word);
    if (len > 0 && word[len - 1] == '\n') {
        word[len - 1] = '\0';
    }
}

int main() {
    FILE *file;
    char word[MAX_SIZE];
    char words[MAX_SIZE][MAX_SIZE];
    int count[MAX_SIZE];
    int found;
    int totalWords = 0;
    char filename[100];
    printf("enter your file name: ");
scanf("%s",&filename);
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File not found");
        return 1;
    }

    while (fscanf(file, "%s", word) != EOF) {
        removeNewLine(word);
        found = 0;
        for (int i = 0; i < totalWords; i++) {
            if (strcmp(words[i], word) == 0) {
                count[i]++;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            strcpy(words[totalWords], word);
            count[totalWords] = 1;
            totalWords++;
        }
    }

    for (int i = 0; i < totalWords; i++) {
        for (int j = 0; j < totalWords - i - 1; j++) {
            if (count[j] < count[j + 1]) {
                int temp = count[j];
                count[j] = count[j + 1];
                count[j + 1] = temp;
                char tempWord[MAX_SIZE];
                strcpy(tempWord, words[j]);
                strcpy(words[j], words[j + 1]);
                strcpy(words[j + 1], tempWord);
            }
        }
    }

    printf("Most common words:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s : %d\n", words[i], count[i]);
    }

    fclose(file);
    return 0;
}