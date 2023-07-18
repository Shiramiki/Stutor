#include <stdio.h>

int main() {
    FILE *fp;
    int num, even_sum = 0, odd_sum = 0;

    // Open the file for reading
    fp = fopen("numbers.txt", "r");

    // Check if the file was opened successfully
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read integers from the file and calculate sums
    while (fscanf(fp, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            even_sum += num;
        } else {
            odd_sum += num;
        }
    }

    // Close the file
    fclose(fp);

    // Display the results
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);

    return 0;
}