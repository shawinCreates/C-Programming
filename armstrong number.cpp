#include <stdio.h>

int main() {
    int num, digit, sum;
    
    printf("Armstrong numbers between 1 and 500:\n");
    
    for (int i = 1; i <= 500; i++) {
        num = i;
        sum = 0;
        
        while (num != 0) {
            digit = num % 10;
            sum += digit * digit * digit;
            num /= 10;
        }
        
        if (i == sum) {
            printf("%d ", i);
        }
    }
    
    return 0;
}

