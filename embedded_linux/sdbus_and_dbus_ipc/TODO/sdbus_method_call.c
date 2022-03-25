/*
This file is part of eRCaGuy_hello_world: https://github.com/ElectricRCAircraftGuy/eRCaGuy_hello_world

Learn to call an sdbus method (function) from a C program.

This C program simply does in C what is the equivalent of this call from the command-line:
```bash
busctl call org.freedesktop.systemd1 /org/freedesktop/systemd1 org.freedesktop.systemd1.Manager StartUnit ss "cups.service" "replace"
```
See: http://0pointer.net/blog/the-new-sd-bus-api-of-systemd.html

STATUS: wip

To compile and run (assuming you've already `cd`ed into this dir):
1. In C:
```bash
gcc -Wall -Wextra -Werror -O3 -std=c17 hello_world_extra_basic.c -o bin/a -lm && bin/a
```
2. In C++
```bash
g++ -Wall -Wextra -Werror -O3 -std=c++17 hello_world_extra_basic.c -o bin/a && bin/a
```

References:
1. *****http://0pointer.net/blog/the-new-sd-bus-api-of-systemd.html - see
  "Invoking a Method, from C, with sd-bus"

*/

#include <stdbool.h> // For `true` (`1`) and `false` (`0`) macros in C
#include <stdint.h>  // For `uint8_t`, `int8_t`, etc.
#include <stdio.h>   // For `printf()`

// int main(int argc, char *argv[])  // alternative prototype
int main()
{
    printf("Hello World.\n\n");

    return 0;
}

/*
SAMPLE OUTPUT:

In C:

    eRCaGuy_hello_world/c$ gcc -Wall -Wextra -Werror -O3 -std=c17 hello_world_extra_basic.c -o bin/a -lm && bin/a
    Hello World.


OR, in C++:

    eRCaGuy_hello_world/c$ g++ -Wall -Wextra -Werror -O3 -std=c++17 hello_world_extra_basic.c -o bin/a && bin/a
    Hello World.


*/
