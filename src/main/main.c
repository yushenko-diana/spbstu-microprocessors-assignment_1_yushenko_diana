
#include <stm32f10x.h>

	int N = 6;
	int K = 12;
	double b = 4.2;
	double f = 3.1;
	float v = 6.6;
	float m = 12.4;
	
	int main(void){
	int c, c0 = 0, c1 = 1, i = 1;
	if (N == 0) {
		c = 0;
	}
	if (N == 1) {
		c = 1;	
	}
		while (i < N) {
			c = c0 + c1;
			c0 = c1;
			c1 = c;
			i++;
		}
	
		return 0;
}
	
	

