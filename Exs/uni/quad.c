#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c,del;
	printf("Enter 3 Values for each variable a, b, and c \n");
	scanf("%lf %lf %lf", &a, &b, &c);
	del = b*b-4*a*c;
	if (del > 0) {
		printf("X1= %lf", (-b+sqrt(del))/(2*a));
	}
	else if (del == 0) {
		printf("X1=X2= %.lf", (-b)/(2*a));
	}
	else {
		printf("No real solution");
	}
	return 0;
}
