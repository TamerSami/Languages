#include <iostream>
#include <iomanip>
#include <string>

int main() {
	double a, b;
	std::string result = "x = ";
	std::cout << "Enter values for: a and b in the form of a, b to calculate -b/a" << "\n";
	
	char comma;
	std::cin >> a >> comma >> b;

	//double x = -b/a;

	if (a == 0) {
		if (b == 0) {
			std::cout << "Infinite Solutions." << '\n';
		}
		else {
			std::cout << "No Solution." << '\n';
		}
	}
	else {
		double x = -b/a;
		std::cout << result << std::fixed << std::setprecision(2) << x << '\n';
	}

	return 0;
}
