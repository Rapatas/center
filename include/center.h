#ifndef CENTER_H
#define CENTER_H

#include <string>

unsigned get_terminal_width();

std::string center(
	const std::string &text,
	unsigned width = get_terminal_width()
);

#endif // CENTER_H
