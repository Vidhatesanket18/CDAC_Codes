#include <stdio.h>
#include <math.h>

int main() {
    
    int num = 0;
    printf("Enter the number to check whether it is armstrong or not: \n");
    scanf("%d", &num);
    int originalNum = num; // Store the original number for later comparison
    int count = 0;

    // Count the number of digits
    while (num > 0) {
        num = num / 10;
        count++;
    }

    num = originalNum; // Reset num to the original value
    int sum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        sum += pow(lastDigit, count);
        num = num / 10;
    }
    
    if (sum == originalNum) {
        printf("Entered number is an Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}
