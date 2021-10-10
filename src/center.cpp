#include <center/center.h>

std::string center(
	const std::string &text,
	size_t width
) {
	if (text.size() >= width)
  {
    return text;
  }

	const size_t padding_width = (width / 2) - (text.size() / 2);

	return std::string(padding_width, ' ') + text;
}
