#include <stdio.h>

int main() {
    int n, bp, choice;

    printf("Enter number and bit position:\n");
    scanf("%d %d", &n, &bp);

    printf("Select Operation:\n");
    printf("1. Set Bit\n2. Clear Bit\n3. Toggle Bit\n");
    scanf("%d", &choice);

    printf("Before operation: n = %d\n", n);

    switch (choice) {
        case 1: n = n | (1 << bp); // set bit
		break;          
        case 2: n = n & ~(1 << bp); // clear bit
		 break;         
        case 3: n = n ^ (1 << bp);  // toggle bit
		break;         
        default: printf("Invalid Choice\n"); 
		return 0;
    }

    printf("After operation: n = %d\n", n);

    return 0;
}

