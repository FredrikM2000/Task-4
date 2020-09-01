#include <iostream>

int fDrink;
bool repeat = true;

int main() {
	while (repeat == true) {
		std::cout << "Select your favorite drink: ";
		std::cout << "\n(1)| Coffee";
		std::cout << "\n(2)| Tea";
		std::cout << "\n(3)| Coca cola";
		std::endl(std::cout);
		std::cin >> fDrink;

		if (fDrink == 1) {
			std::cout << "Coffee is delicious";
			repeat = false;
		}
		else if (fDrink == 2) {
			std::cout << "Tea gives peace of mind";
			repeat = false;
		}
		else if (fDrink == 3) {
			std::cout << "Coke will give you a white smile";
			repeat = false;
		}
		else {
			std::cout << "Not valid\n";
			repeat = true;
		}
	}
}
