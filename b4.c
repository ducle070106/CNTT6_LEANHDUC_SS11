#include <stdio.h>

int main() {
    int sortedArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = sizeof(sortedArray) / sizeof(sortedArray[0]);
    int targetElement;
    int foundIndex = -1;
    int low = 0;
    int high = n - 1;
    int mid;
    printf("Please enter the number you want to search for: ");
    scanf("%d", &targetElement);
    while (low <= high) {
        mid = low + (high - low) / 2;
        if (sortedArray[mid] == targetElement) {
            foundIndex = mid;
            break;
        } else if (sortedArray[mid] < targetElement) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (foundIndex != -1) {
        printf("The number %d was found at index: %d\n", targetElement, foundIndex);
    } else {
        printf("The number %d was not found in the array.\n", targetElement);
    }

    return 0;
}