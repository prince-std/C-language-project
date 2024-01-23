#include <stdio.h>

int main() {
    int choice;
    float temperature, convertedTemp;
    char scale;

    do {
        printf("Choose conversion:\n");
        printf("1. Fahrenheit to Celsius\n");
        printf("2. Celsius to Fahrenheit\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Fahrenheit: ");
                scanf("%f", &temperature);
                convertedTemp = (temperature - 32) * 5 / 9;
                printf("%.2f Fahrenheit is equal to %.2f Celsius\n\n", temperature, convertedTemp);
                break;

            case 2:
                printf("Enter temperature in Celsius: ");
                scanf("%f", &temperature);
                convertedTemp = (temperature * 9 / 5) + 32;
                printf("%.2f Celsius is equal to %.2f Fahrenheit\n\n", temperature, convertedTemp);
                break;

            case 3:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please enter a valid option.\n\n");
                break;
        }

    } while (choice != 3);

    return 0;
}
