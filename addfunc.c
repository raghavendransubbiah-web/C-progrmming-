// C Program to Add Two Numbers Using Functions
#include <stdio.h>

// Defining user-defined function
int add(int x, int y)
{
    return x + y;
}

int main()
{
    int a, b, sum;
    
    // Asking for input
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    
    // Calling out function
    sum = add(a, b);
    
    // Displaying output
    printf("Sum of two numbers: %d \n", sum);
    
    return 0;
}
