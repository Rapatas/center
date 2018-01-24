#ifndef CENTER_H
#define CENTER_H

#include <string>

#ifdef __linux__
#include <sys/ioctl.h>
#include <unistd.h>
#elif _WIN32
#endif

// This function will be called if the user does not provide a line width
unsigned get_terminal_width() {
#ifdef __linux__
	struct winsize size;
	ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
	return size.ws_col;
#elif _WIN32
	return 80;
#endif
}

std::string inline center(
	const std::string &text,
	unsigned width = get_terminal_width()
) {

	// If the string is longer than the specified width don't do anything.
	if (text.size() >= width) { return text; }

	unsigned padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}

#endif // CENTER_H
