# 0x11. C - printf

## Description

The printf project is a collaboration between `shalabycr7` and `ghada3333`, students of Software Engineering at
ALX, where a function named `_printf` behaves like `printf` command found in the `stdio.h` library. It contains
some of the functions found in the manual of `printf`.

`_printf()` is a function that performs formatted output conversion and print data. Its prototype is the following:

        int _printf(const char *format, ...)

Where `**format**` contains the string that is printed. As `_printf()` is variadic function, it can receive n arguments
that replace by n tags written inside the string.

The format tags prototype is the following:

        %[flags][length]specifier

## Specifier Examples

| Specifier | Output                                                  |
|-----------|---------------------------------------------------------|
| c         | Character                                               |
| i         | Signed decimal integer                                  |
| s         | String of characters                                    |
| b         | Signed binary                                           |
| o         | Signed octal                                            |
| u         | Unsigned integer                                        |
| x         | Unsigned hexadecimal                                    |
| X         | Unsigned hexadecimal (uppercase)                        |
| p         | Pointer address                                         |
| r         | Reverse string of characters                            |
| R         | ROT13 translation of string                             |
| S         | String with special chars replaced by their ASCII value |
| %         | Character                                               |

---

## Files

### [_printf.c](./_printf.c)

* Customized `Printf` function that performs formatted output print it.
