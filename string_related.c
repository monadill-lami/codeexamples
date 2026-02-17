#include <stdio.h>

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
    // Find end of dest
    while (dest[i] != '\0') {
        i++;
    }
    // Append src
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0'; // Null-terminate
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

    return 0;
}
