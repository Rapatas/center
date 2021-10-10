#ifdef __linux__

#include <unistd.h>
#include <sys/ioctl.h>

#include <cstring>
#include <cerrno>
#include <cstdio>

#include <iostream>

size_t get_terminal_width()
{
  struct winsize size;
  const auto code = ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
  if (code == -1)
  {
    std::fprintf(stderr, "%s\n", std::strerror(errno));
    return 80;
  }

  return size.ws_col;
}

#endif // __linux__
