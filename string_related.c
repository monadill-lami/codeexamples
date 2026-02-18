#include <stdio.h>
#include <string.h>
#include <ctype.h>

// (a) Copy one string to another
void myStrcpy(char dest[], const char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0'; // Null-terminate destination
}

// (b) Compare two strings
int myStrcmp(const char str1[], const char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // Difference of ASCII values
        }
        i++;
    }
    return str1[i] - str2[i]; // Handles unequal lengths
}

// (c) Concatenate one string to the end of another
void myStrcat(char dest[], const char src[]) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++; // find end of dest
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
}

// (d) Count occurrences of a word in a text
int countWordOccurrences(const char text[], const char word[]) {
    int count = 0;
    int lenText = strlen(text);
    int lenWord = strlen(word);

    for (int i = 0; i <= lenText - lenWord; i++) {
        if (strncmp(&text[i], word, lenWord) == 0) {
            count++;
        }
    }
    return count;
}

// (e) Extract m characters starting from nth character
void extractSubstring(const char src[], char dest[], int n, int m) {
    int i;
    for (i = 0; i < m && src[n + i] != '\0'; i++) {
        dest[i] = src[n + i];
    }
    dest[i] = '\0';
}

// (f) Count occurrences of a substring in a text
int countSubstringOccurrences(const char text[], const char sub[]) {
    int count = 0;
    int lenText = strlen(text);
    int lenSub = strlen(sub);

    for (int i = 0; i <= lenText - lenSub; i++) {
        if (strncmp(&text[i], sub, lenSub) == 0) {
            count++;
        }
    }
    return count;
}

// (g) Copy m consecutive characters from s1 starting at n into s2
void copySubstring(const char s1[], char s2[], int n, int m) {
    int i;
    for (i = 0; i < m && s1[n + i] != '\0'; i++) {
        s2[i] = s1[n + i];
    }
    s2[i] = '\0';
}

// (h1) Find smallest word in a string
void findSmallestWord(const char str[], char smallest[]) {
    char word[100];
    int i = 0, j = 0;
    int firstWord = 1;

    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (firstWord || strlen(word) < strlen(smallest)) {
                    strcpy(smallest, word);
                    firstWord = 0;
                }
                j = 0;
            }
        }
        i++;
    }
    if (j > 0) {
        word[j] = '\0';
        if (firstWord || strlen(word) < strlen(smallest)) {
            strcpy(smallest, word);
        }
    }
}

// (h2) Find largest word in a string
void findLargestWord(const char str[], char largest[]) {
    char word[100];
    int i = 0, j = 0;
    int firstWord = 1;

    while (str[i] != '\0') {
        if (!isspace(str[i])) {
            word[j++] = str[i];
        } else {
            if (j > 0) {
                word[j] = '\0';
                if (firstWord || strlen(word) > strlen(largest)) {
                    strcpy(largest, word);
                    firstWord = 0;
                }
                j = 0;
            }
        }
        i++;
    }
    if (j > 0) {
        word[j] = '\0';
        if (firstWord || strlen(word) > strlen(largest)) {
            strcpy(largest, word);
        }
    }
}

int main() {
    char str1[100], str2[100], str3[200];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Copy
    myStrcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // Compare
    int cmp = myStrcmp(str1, str2);
    if (cmp == 0)
        printf("Strings are equal\n");
    else if (cmp < 0)
        printf("First string is smaller\n");
    else
        printf("First string is greater\n");

    // Concatenate
    myStrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Word occurrence test
    char text[200] = "this is a test string and this is a test";
    char word[20] = "test";
    printf("Occurrences of '%s': %d\n", word, countWordOccurrences(text, word));

    // Extract substring
    char extracted[50];
    extractSubstring(text, extracted, 5, 10);
    printf("Extracted substring: %s\n", extracted);

    // Count substring occurrences
    char sub[20] = "is";
    printf("Occurrences of substring '%s': %d\n", sub, countSubstringOccurrences(text, sub));

    // Copy substring
    char s2[50];
    copySubstring(text, s2, 10, 5);
    printf("Copied substring: %s\n", s2);

    // Smallest and largest word
    char smallest[100], largest[100];
    findSmallestWord(text, smallest);
    findLargestWord(text, largest);
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}
