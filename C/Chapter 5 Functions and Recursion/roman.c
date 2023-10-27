#include <stdio.h>

// Function to convert integer to Roman numeral
void convertToRoman(int num) {
    // Arrays to store Roman numeral symbols and their corresponding values
    char *romanSymbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int romanValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Iterate through the arrays and convert the integer to Roman numeral
    for (int i = 0; i < 13; i++) {
        while (num >= romanValues[i]) {
            printf("%s", romanSymbols[i]);
            num -= romanValues[i];
        }
    }
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 1 || number > 3999) {
        printf("Invalid number. Roman numerals can only represent values from 1 to 3999.\n");
        return 0;
    }

    printf("Roman numeral: ");
    convertToRoman(number);
    printf("\n");

    return 0;
}