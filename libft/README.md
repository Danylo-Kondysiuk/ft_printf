*This project has been created as part of the 42 curriculum by kondysi.*v

# Libft

## 📌 Description
Libft is the very first project of the 42 curriculum.  
Its goal is to help you understand and recreate essential standard C library functions,  
and to build your own reusable library (`libft.a`) that will be used in many future projects.

This project is divided into three main parts:

1. **Libc functions** – Reimplementing standard C functions such as `strlen`, `memcpy`,  
   `atoi`, `isdigit`, etc., all prefixed with `ft_`.

2. **Additional functions** – Higher-level string manipulation, memory allocation,  
   and utility functions such as `ft_split`, `ft_itoa`, `ft_strjoin`, and more.

3. **Linked list utilities** – Implementing a complete set of functions to manipulate  
   singly linked lists using the provided `t_list` structure.

Libft helps you gain a solid understanding of memory management, pointer manipulation,  
and low-level C logic — fundamentals that will be used throughout your 42 journey.

---

## ⚙️ Instructions

### 🔧 Compilation
A Makefile is provided, containing the required rules:

- `make` or `make all` – Compiles all sources and creates `libft.a`
- `make clean` – Removes object files
- `make fclean` – Removes object files and the library `libft.a`
- `make re` – Cleans and recompiles everything
- `make bonus` – Compiles with bonus linked-list functions

To build the library:
```bash
make
This will generate:
libft.a
📁 File Structure
All files are placed at the root of the repository:
libft.h
ft_*.c
Makefile
📚 Library Overview
🔹 Part 1 — Libc Functions
Reimplementations of standard C library functions, including:

Character checks: ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint

String functions: ft_strlen, ft_strlcpy, ft_strlcat, ft_strncmp,
ft_strchr, ft_strrchr, ft_strnstr

Memory functions: ft_memset, ft_bzero, ft_memcpy, ft_memmove,
ft_memchr, ft_memcmp

Conversions: ft_atoi

Allocations: ft_calloc, ft_strdup

All functions strictly follow the behavior described in their respective man pages.

🔹 Part 2 — Additional Functions
More advanced utilities that do not exist in libc or differ from standard behavior:

ft_substr

ft_strjoin

ft_strtrim

ft_split

ft_itoa

ft_strmapi

ft_striteri

File-descriptor functions:

ft_putchar_fd

ft_putstr_fd

ft_putendl_fd

ft_putnbr_fd

These functions rely heavily on memory allocation and string processing.

🔹 Part 3 — Linked List Functions
Based on the provided structure:

typedef struct s_list {
    void            *content;
    struct s_list   *next;
} t_list;
Functions implemented:

ft_lstnew

ft_lstadd_front

ft_lstsize

ft_lstlast

ft_lstadd_back

ft_lstdelone

ft_lstclear

ft_lstiter

ft_lstmap

These utilities allow creation, traversal, modification, and deletion of singly linked lists.

📎 Resources
📘 Classic references
The C Programming Language – K&R

man 3 pages for libc functions

GNU Glibc documentation

BSD libc documentation for strlcpy, strlcat, and bzero

42 documentation on memory management and pointers

Use of AI in This Project
AI was used only for non-code tasks, specifically:

Clarifying project requirements

Refining the README.md structure and wording

Formatting explanations and sections for clarity

AI was not used to generate or complete any of the project’s source code,
algorithms, or implementation details, in accordance with 42’s foundational-phase expectations.