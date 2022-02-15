#include <iostream>

int main(void) {
	double kilometers = 0.0, miles = 0.0;

	std::cout << "Please enter your amount of kolometers: ";
	std::cin >> kilometers;

	if (std::cin.fail()) {
		std::cerr << "Input error!";
		return 1;
	}

	miles = kilometers / 1.6;

	std::cout << kilometers << " kilometers are the same as " << miles << " miles!" << std::endl;
	return 0;
}
