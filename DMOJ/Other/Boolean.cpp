#include <iostream>
#include <string>
int main() {
	std::string a;
	int num{ 0 };
	std::cin >> a;
	while (a.compare("not") == 0) {
		std::cin >> a;
		num++;
	}
	if (num % 2 != 0) {
		if (a.compare("True") == 0) {
			std::cout << "False";
		}
		else {
			std::cout << "True";

		}
	}
	else {
		if (a.compare("True") == 0) {
			std::cout << "True";

		}
		else {
			std::cout << "False";
		}
	}
}
