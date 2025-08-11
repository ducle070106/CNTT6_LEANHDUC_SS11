#include <stdio.h>

int main() {

    int myArray[] = {10, 25, 33, 47, 51, 62, 78, 89};
    int n = sizeof(myArray) / sizeof(myArray[0]);
    int targetElement;
    int foundIndex = -1;
    printf("Please enter the number you want to search for: ");
    scanf("%d", &targetElement);
    for (int i = 0; i < n; i++) {
        if (myArray[i] == targetElement) {
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1) {
        printf("The number %d was found at index: %d\n", targetElement, foundIndex);
    } else {
        printf("The number %d was not found in the array.\n", targetElement);
    }

    return 0;
}