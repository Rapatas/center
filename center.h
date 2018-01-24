#ifndef CENTER_H
#define CENTER_H

#include <string>

std::string inline center(const std::string &text, unsigned width = 80) {

	// If the string is longer than the specified width don't do anything.
	if (text.size() >= width) { return text; }

	unsigned padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}

#endif // CENTER_H
