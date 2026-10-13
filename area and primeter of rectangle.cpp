#include <stdio.h>

int main() {
    int l, b, A, P;
    
    printf("Enter length and breadth : ");
    scanf("%d %d", &l, &b);
    
    A = l * b;
    P = 2 * (l + b);
    
    printf("\nArea of rectangle = %d", A);
    printf("\nPerimeter of rectangle = %d", P);
    
    return 0;
}