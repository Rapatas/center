#ifndef CENTER_H
#define CENTER_H

#include <string>

#ifdef __linux__
#include <sys/ioctl.h>
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

std::string inline center(
	const std::string &text,
	// This lambda will be called if the user does not provide a line width
	unsigned width = []() -> unsigned {
#ifdef __linux__
		struct winsize size;
		ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
		return size.ws_col;
#elif _WIN32
		CONSOLE_SCREEN_BUFFER_INFO csbi;
		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
		return csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
		return 80;
#endif
	} ()
) {

	// If the string is longer than the specified width don't do anything.
	if (text.size() >= width) { return text; }

	unsigned padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}

#endif // CENTER_H
