//count words in a string
#include <stdio.h>

int main()
 {
    char inputString[1000];

    // Get user input for the string
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Call the function to count the total number of words in the string
    int wordCount = countWords(inputString);

    // Display the result
    printf("Total number of words in the string: %d\n", wordCount);

    return 0;
}
// Function to count the total number of words in a string
int countWords(char str[]) {
    int count = 0;
    bool isWord = false;

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the current character is an alphabet or digit
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9')) {
            // If it's the start of a new word, increment the word count
            if (!isWord)
            {
                isWord = true;
                count++;
            }
        } else {
            // Set isWord to false when a non-alphanumeric character is encountered
            isWord = false;
        }
    }

    return count;
}


