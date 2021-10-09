<p align="center">
    <img
        width="20%"
		alt="Center Logo"
		src="./resources/images/center.svg">
</p>

# Center

Centers strings of text horizontally in your terminal.

## Usage

### Executable

```bash
cat file.txt | center
```

### Library

```cpp
#include <center/center.h>

// Calculate the width automatically.
std::cout << center("Original text") << '\n';

// Forced width (80).
std::cout << center("Original text", 80) << '\n';
```

## Installation

```bash
git clone https://github.com/rapatas/center
mkdir center/build
cd center/build
cmake ..
make
make package
sudo apt install center_*_*.deb
```
