# Centering text has never been easier!

Center a string of text horizontally in your terminal.

- Works on windows and linux.
- Automatically calculates the width of your terminal

```cpp
std::cout << center("Original text") << '\n';
```
Or just pick the width yourself:
```cpp
// Forced width (80).
std::cout << center("Original text", 80) << '\n';
```
