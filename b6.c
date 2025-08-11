#include <stdio.h>
#include <string.h>

int main() {
    char stringArray[5][20] = {"apple", "banana", "orange", "grape", "kiwi"};
    int n = 5;
    char targetString[20];
    int foundIndex = -1;
    printf("Please enter the string you want to search for: ");
    scanf("%s", targetString);
    for (int i = 0; i < n; i++) {
        if (strcmp(stringArray[i], targetString) == 0) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("The string '%s' was found at index: %d\n", targetString, foundIndex);
    } else {
        printf("The string '%s' was not found in the array.\n", targetString);
    }
    return 0;
}