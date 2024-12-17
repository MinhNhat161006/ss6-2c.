#include <stdio.h>

int main() {
    int number;          
    int evenCount = 0;    
    int oddCount = 0;    
    int i;                

    printf("Nhap vao 5 so nguyen:\n");
    for (i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &number);

        if (number % 2 == 0) {
            evenCount++;
        } else {
            oddCount++; 
        }
    }

    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}

