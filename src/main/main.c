#include <stm32f10x.h>

int volatile num1, num2, result, i;
int N = 5;
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
