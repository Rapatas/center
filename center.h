#ifndef CENTER_H
#define CENTER_H

#include <string>

#ifdef __linux__
#include <sys/ioctl.h>
#include <unistd.h>
#elif _WIN32
#include <windows.h>
#endif

unsigned get_terminal_width() {
#ifdef __linux__
	struct winsize size;
	ioctl(STDOUT_FILENO,TIOCGWINSZ,&size);
	return size.ws_col;
#elif _WIN32
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	return csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
	// If there is no way to find the terminal width, set it to 80
	return 80;
#endif
}

std::string inline center(
	const std::string &text,
	unsigned width = get_terminal_width()
) {
	// If the string is longer than the specified width, don't do anything.
	if (text.size() >= width) { return text; }

	unsigned padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}

#endif // CENTER_H
