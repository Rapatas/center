# Centering text has never been easier!

Center a string of text horizontally in your terminal.

```cpp
// It will figure out the width of your terminal and place the text in the middle.
std::cout << center("Original text") << '\n';

// Optionaly, you can provide a forced width (80).
std::cout << center("Original text", 80) << '\n';
```
# TODO
* Make it work on Windows.
