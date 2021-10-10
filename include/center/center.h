#ifndef CENTER_H
#define CENTER_H

#include <string>

size_t get_terminal_width();

std::string center(
	const std::string &text,
	size_t width = get_terminal_width()
);

#endif // CENTER_H
