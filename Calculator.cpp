#include <stdio.h>
int main() {
    int a, b, c;
    printf("Input a number:\n");
    scanf("%i", &a);
    printf("\nEnter an instruction:\n");
    scanf("%i", &b);
    printf("\nEnter the second number :\n");
    scanf("%i", &c);
    if (b == 1) {
        printf("\nThe Answer Is:%i\n", a + c);
    }
    else if (b == 2) {
        printf("\nThe Answer Is:%i\n", a - c);
    }
    else if (b == 3) {
        printf("\nThe Answer Is:%i\n", a * c);
    }   
    else if (b == 4) {
        printf("\nThe Answer Is:%i\n", a / c);
    }  
    else {
        printf("Error! You Somehow Managed to Fuck This Up.");
    }
    return 0;
}