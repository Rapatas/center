# Center

Centers a string of text horizontally in your terminal.

## Usage

### Executable

```bash
cat file.txt | center
```

### Library

```cpp
#include <center/center.h>

// Calculate the width automaticly
std::cout << center("Original text") << '\n';

// Forced width (80).
std::cout << center("Original text", 80) << '\n';
```

## Installation

```bash
git clone https://github.com/Rapatas/center
mkdir center/build
cd center/build
cmake ..
make
make install # As root
```
