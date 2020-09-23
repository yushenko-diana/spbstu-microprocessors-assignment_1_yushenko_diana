#include <stm32f10x.h>

int volatile num1, num2, result, i;
int N = 5;
float a = 1.2;      // адрес: 0x20000014
double b = 34.4;  // адрес: 0x20000018
int c = 234;    // адрес: 0x20000020
int main()
{
    num1 = 0;
    num2 = 1;
    for (i = 1; i < N; i++) {
        result = num1 + num2;
        num1 = num2;
        num2 = result;
    }
    return 0;
}
