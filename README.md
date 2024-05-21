# Libft Library

Libft is a custom C library containing various utility functions. This library can be installed and used in your C projects. 

> ## Installation ⚙️

To install the Libft library, follow these steps:

1. **Clone the Repository:**
   Clone the repository from GitHub to your local machine.
   ```bash
   git clone https://github.com/Prodaturu/libft.git
   cd libft
   ```

2. **Build the Library:**
  Use the provided Makefile to compile the source files and create the library archive (libft.a).
  ```bash
  make
  ```

3. **Install the Library:**
   Install the library and the header file to standard system directories so that they can be included and linked easily in other projects.
```bash
sudo cp libft.a /usr/local/lib/
sudo cp libft.h /usr/local/include/
sudo ldconfig
```

## Usage 👩‍💻

1. **Include the Header:**
  In your C source file, include the Libft header file.
```c
#include <libft.h>
```

2. **compile your program:**
  Compile your program with the -lft option to link against the Libft library.
```bash
  gcc your_program.c -lft
```
or 
```bash
  gcc your_program.c -lft -o prog_name
```

## Example:

Example program using the libft library (named example.c)

```c
#include <stdio.h>
#include <libft.h>

int main() {
    char *str = "Hello, World!";
    int length = ft_strlen(str);
    printf("The length of the string is: %d\n", length);
    return 0;
}
```

Compile the example program:

```bash
  gcc example.c -lft -o example
```

Run the example program:

```bash
  ./example
```

we should see the output as 

`The length of the string is: 13`

## Cleaning up: 🧹

```bash
# Clean up object files
make clean

# Remove all generated files, including the library archive
make fclean

# Recompile everything from scratch
make re
```


## Contributing:

Feel free to fork this repository and contribute by simply submitting a pull request. Any improvements or bug fixes are welcome.

## License

This project is licensed under the MIT License.




