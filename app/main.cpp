#include <iostream>

#include <center/center.h>

int main() {

	std::string lineInput;
	while (getline(std::cin, lineInput)) {
		std::cout << center(lineInput);
	}

	std::cout << '\n';
}
