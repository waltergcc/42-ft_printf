# ft_printf

This project aims ud to recreate the printf function from the standard library. The main objective of this project is to learn how to use variadic functions, parsing and handling flags and specifiers, and how to handle different types of data.

### Supported conversions - Mandatory

- `%c` print a character
- `%s` print a string
- `%d` and %i print a decimal number
- `%u` print an unsigned decimal number
- `%x` and %X print a hexadecimal number
- `%p` print a pointer address
- `%%` print a percent symbol

### Supported flags - bonus

- `-` left-justify output
- `1-9` specify field width or precision using an argument from the argument list
- `+` Add plus sign before absolute numbers
- ` ` Add a space sign before absolute numbers
- `0` zero-pad output
- `.` specify precision

## Instructions
Run the command `make` to compile the `libftprintf.a` library.
After the compilation is complete, you can use the libftprintf.a library in your projects.
To compile the bonus files, run the command `make bonus`.

To clean the object files generated during compilation, run the command `make clean`.
To remove the libftprintf.a library, run the command `make fclean`.
To recompile the entire project, run the command `make re`.

## Grade: 118 / 100
I have an KO by moulinette only in the bonus flag `.`. Otherwise, all are OK.

## Used Tests
- Francinette: https://github.com/xicodomingues/francinette
- printfTester: https://github.com/Tripouille/printfTester
