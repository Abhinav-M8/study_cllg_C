#include <stdio.h>

int main()
{
    /* (a) Variable Declaration and Initialization */

    int a = 10, b = 5;          // 2 integer variables
    float x = 2.5, y = 4.2, z = 1.8;   // 3 float variables
    char ch = 'A';             // 1 character variable
    char* str = "Hello World"; // 1 string

    printf("Integer Variables:\n");
    printf("a = %d, b = %d\n", a, b);

    printf("\nFloat Variables:\n");
    printf("x = %.2f, y = %.2f, z = %.2f\n", x, y, z);

    printf("\nCharacter Variable:\n");
    printf("ch = %c\n", ch);

    printf("\nString Variable:\n");
    printf("str = %s\n", str);

    /* (b) Arithmetic Operations */

    printf("\nArithmetic Operations on Integers:\n");
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);

    printf("\nArithmetic Operations on Floats:\n");
    printf("Addition = %.2f\n", x + y);
    printf("Subtraction = %.2f\n", x - y);
    printf("Multiplication = %.2f\n", x * y);
    printf("Division = %.2f\n", x / y);

    /* (c) Integer vs Float Division */

    int i1 = 5, i2 = 2;
    float f1 = 5.0, f2 = 2.0;

    int c_int;
    float c_float;

    printf("\nDivision Results for a = 5 and b = 2:\n");

    /* both int, result int */
    c_int = i1 / i2;
    printf("int/int -> int = %d\n", c_int);

    /* both int, result float */
    c_float = i1 / i2;
    printf("int/int -> float = %.2f\n", c_float);

    /* both float, result int */
    c_int = f1 / f2;
    printf("float/float -> int = %d\n", c_int);

    /* both float, result float */
    c_float = f1 / f2;
    printf("float/float -> float = %.2f\n", c_float);

    return 0;
}