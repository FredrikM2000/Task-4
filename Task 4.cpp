#include <iostream>

int fDrink;
bool repeat = true;

int main() {
	while (repeat == true) { //Makes sure the user cannot put an invalid number, I also tried this for strings but I couldn't make it work
		repeat = false;
		std::cout << "Select your favorite drink: ";
		std::cout << "\n(1)| Coffee";
		std::cout << "\n(2)| Tea";
		std::cout << "\n(3)| Coca cola";
		std::endl(std::cout);
		std::cin >> fDrink;

		if (fDrink == 1) {
			std::cout << "Coffee is delicious";
		}
		else if (fDrink == 2) {
			std::cout << "Tea gives peace of mind";
		}
		else if (fDrink == 3) {
			std::cout << "Coke will give you a white smile";
		}
		else {
			std::cout << "Not valid, try again\n";
			repeat = true;
		}
	}
}
