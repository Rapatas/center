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

	// Centering a string of length 4 on a line of width 8 should add 2 spaces.
	text = "1234";
	assert(center(text, 8).size() == text.size() + 2);

	// Centering a string of length 5 on a line of width 7 should add 1 spaces.
	text = "12345";
	assert(center(text, 7).size() == text.size() + 1);
}
