#include <stdio.h>

int main(){
	double a, b;

	printf("Enter 2 Nbs: a and b to calculate -b/a. \n");
	scanf("%lf, %lf", &a, &b);

	if (a == 0) {
		if (b == 0) {
			printf("Infinite Solutions. \n");
		}
		else {
			printf("No Solution. \n");
		}
	}
	else {
		printf("x = %.2lf / %.2lf = %.2lf \n", b, a, -b / a);
	}

	return 0;
}
