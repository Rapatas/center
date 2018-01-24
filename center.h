#ifndef CENTER_H
#define CENTER_H

#include <string>

std::string center(const std::string &text, unsigned width = 80) {

	// If the text is bigger than the specified width
	// Don't do anything.
	if (text.size() >= width) { return text; }

	unsigned padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}

#endif // DENTER_H
