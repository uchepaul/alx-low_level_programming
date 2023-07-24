// _putchar.c

#include <unistd.h>

// The actual implementation of _putchar that writes a character to the console.
// In this case, we are using the write system call to output a single character.
int _putchar(char c) {
    return write(1, &c, 1);
}
