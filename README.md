# 📚 LIBFT – The Foundation of Custom C Libraries

> _“Build your own standard library – and truly understand the language.”_


LIBFT is a personal C library crafted from scratch as part of the 42 Abu Dhabi School curriculum. Completed on 23 November 2023, the project’s objective was to deepen understanding of core C functionalities by re-implementing standard library functions and building custom ones. The result is a flexible, portable static library ready to be reused in future C projects.

📦 **Static Library**  
⚙️ **Pure C**  
🏗️ **Built for Reusability**

---

## Getting Started

Run the command `make` to create the **libft.a** library file.

In future projects, the libft will be used by placing this libft folder in the projects folder. The libft.a library will be compiled at the same time as the project by adding the following rule to the Makefile :
```
libft:
    make -C libft/
```
As well as the following flags to the compilation of the sources of the project :
```
-I./libft/includes/ -L./libft -lft
```

## Available functions

### :mag: Character recon and transformation
- `ft_isalpha`
- `ft_isdigit`
- `ft_isalnum`
- `ft_isascii`
- `ft_isprint`
- `ft_iswhitespace` (BONUS)
- `ft_toupper`
- `ft_tolower`

### :fountain_pen: String manipulations
- `ft_strlen`
- `ft_strnew`
- `ft_strdel`
- `ft_strclr`
- `ft_striter`
- `ft_striteri`
- `ft_strcmp`
- `ft_strncmp`
- `ft_strequ`
- `ft_strnequ`
- `ft_strdup`
- `ft_strcpy`
- `ft_strncpy`
- `ft_strcat`
- `ft_strncat`
- `ft_strlcat`
- `ft_strchr`
- `ft_strstr`
- `ft_strnstr`
- `ft_strsub`
- `ft_strjoin`
- `ft_strtrim`
- `ft_strsplit`

### :floppy_disk: Memory manipulation
- `ft_memset`
- `ft_bzero`
- `ft_memcpy`
- `ft_memccpy`
- `ft_memmove`
- `ft_memchr`
- `ft_memcmp`
- `ft_memalloc`
- `ft_memdel`

### :chains: Chained lists manipulation (BONUS)
- `ft_lstnew`
- `ft_lstdelone`
- `ft_lstdel`
- `ft_lstadd`
- `ft_lstiter`
- `ft_lstmap`
- `ft_strsplitlst`
- `ft_lstcpy`
- `ft_lstappend`

### :money_with_wings: Conversions
- `ft_atoi`
- `ft_itoa`
- `ft_itoa_base` (BONUS)

### :scroll: Printing
- `ft_putchar`
- `ft_putchar_fd`
- `ft_putstr`
- `ft_putstr_fd`
- `ft_putendl`
- `ft_putendl_fd`
- `ft_putnbr`
- `ft_putnbr_fd`
- `ft_putstrarray` (BONUS)
- `ft_putfile` (BONUS)
- `ft_printbits` (BONUS)
- `ft_putwchar` (BONUS)

### :rowing_woman: Stream reading (BONUS)
- `ft_fopen`
- `ft_fclose`
- `ft_fgetc`

### :tornado: Misc (BONUS)
- `ft_filelinecount`
- `ft_double_power`
- `ft_ldouble_power`
- `ft_wchar_to_bytes`
- `ft_array_swap`
- `ft_tabdel`
- `ft_nbdigits`
- `ft_nbdigits_base`

  ---
  ## 📘 Concepts Learned

Completing the LIBFT project was a deep dive into the fundamentals of C programming and software craftsmanship. Here are the key concepts and skills I developed:

- 🔹 **Memory Management**
  - Manual memory allocation and deallocation using `malloc`, `free`, and related functions
  - Understanding buffer overflows, memory leaks, and alignment issues

- 🔹 **Pointers and Addresses**
  - Mastering pointer arithmetic and dereferencing
  - Building and navigating linked data structures

- 🔹 **String Handling**
  - Re-implementing core string functions and managing null-terminated arrays

- 🔹 **Modular Code Design**
  - Writing reusable, clean, and readable functions
  - Organizing code into logical modules

- 🔹 **Static Libraries**
  - Creating and using a `.a` archive for modular compilation
  - Integrating custom libraries into other C projects

- 🔹 **Makefiles**
  - Automating builds with custom rules and dependency management

- 🔹 **Data Structures**
  - Building and manipulating linked lists and string arrays

- 🔹 **Low-level Debugging**
  - Using tools like `gdb` and `valgrind` to debug and profile code

- 🔹 **Terminal Output**
  - Managing character and string output using file descriptors

- 🔹 **File Handling (Bonus)**
  - Reading from and writing to files using basic stream-like functions

- 🔹 **Clean Coding Practices**
  - Applying naming conventions, file organization, and documentation

---

These foundations have equipped me with the confidence to build more advanced systems and tackle larger C projects with precision and discipline.

