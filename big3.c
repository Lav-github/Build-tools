#include <stdio.h>

int findBiggest(int a, int b, int c) {
    int biggest = a; 

    if (b > biggest) {
        biggest = b; 
    }

    if (c > biggest) {
        biggest = c; 
    }

    return biggest;
}

int big3() {
    int num1, num2, num3;
    printf("Enter three numbers:" "");
    scanf("%d %d %d", &num1, &num2, &num3);

    int result = findBiggest(num1, num2, num3);
    printf("The biggest number is: %d\n", result);

    return 0;
}
