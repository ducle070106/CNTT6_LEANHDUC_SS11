#include <stdio.h>

int main() {
    int myArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(myArray) / sizeof(myArray[0]);
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (myArray[j] > myArray[j + 1]) {
                temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }
    printf("The sorted array is: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}