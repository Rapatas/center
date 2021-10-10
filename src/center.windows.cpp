#ifdef _WIN32

#include <windows.h>

size_t get_terminal_width()
{
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  const bool code = GetConsoleScreenBufferInfo(
    GetStdHandle(STD_OUTPUT_HANDLE),
    &csbi
  );

  if (!code)
  {
    return 80;
  }

  return csbi.srWindow.Right - csbi.srWindow.Left + 1;
}

#endif // _WIN32
