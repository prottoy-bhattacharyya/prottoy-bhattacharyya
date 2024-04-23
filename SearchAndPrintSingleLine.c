#include <stdio.h>
int main(){
int MAX_LINE_LENGTH = 256;
    FILE *file;
    char filename[MAX_LINE_LENGTH];
    char word[MAX_LINE_LENGTH];
    char line[MAX_LINE_LENGTH];

    // Get word to search from user
    printf("Enter the word to search: ");
    if (scanf("%s", word) != 1) {
        printf("Error reading word.\n");
        sleep(2);
        dictionary();
    }

    // Open the file for reading
    file = fopen("C:/Users/BUBT/Desktop/pro/dictionary.txt", "r");
    if (file == NULL) {
        printf("Error opening file: %s\n", filename);
        sleep(2);
        dictionary();
    }

    // Read the file line by line
    while (fgets(line, MAX_LINE_LENGTH, file)) {
        // Remove trailing newline (if present)
        line[strcspn(line, "\n")] = '\0';

        // Check if the word is present in the line
        if (strstr(line, word) != NULL) {
            printf("%s\n",line);
            // break;  
            // Print only the first occurrence (optional)
        }
    }
    // Close the file
    fclose(file);
}
