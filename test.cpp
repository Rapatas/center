#include <iostream>
#include <string>

#include <cassert>

#include "center.h"

using namespace std;

int main() {

	// Fixture
	string text;

	// Centering a srting in a line of same size should not change the string.
	text = "0123456789";
	assert(center(text, 10) == text);

	// Centering a string in a line of smaller size should not change the sting.
	text = "0123456789+";
	assert(center(text, 10) == text);

	// Centering a string of even length on a line of even width should add
	// an even number of spaces
	text = "1234";
	assert(center(text, 8).size() == text.size() + 2);
}
