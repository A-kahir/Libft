# Libft - 42 Khouribga Project

Welcome to my **Libft** project! This repository contains a collection of essential C functions that I implemented as part of the 42 Khouribga curriculum. Libft is a library that mimics the standard C library functions, and this project helped me strengthen my understanding of C programming, memory management, and efficient code practices.

---

## 📝 Table of Contents
- [Project Overview](#project-overview)
- [Functions Implemented](#functions-implemented)
- [Usage](#usage)
- [Testing](#testing)
- [License](#license)
- [Contact](#contact)

---

## 📌 Project Overview

The **Libft** project at 42 involves creating your own C library with standard functions that simulate those found in the C standard library (`libc`). The goal is to better understand memory management and improve your coding skills in C by recreating common utility functions. These functions handle various tasks like string manipulation, memory handling, and more.

---

## ⚙️ Functions Implemented

Here are some of the key functions I implemented as part of this project:

- **Memory Functions:**
  - `ft_memset`
  - `ft_bzero`
  - `ft_memcpy`
  - `ft_memmove`
  - `ft_memchr`
  - `ft_memcmp`

- **String Functions:**
  - `ft_strlen`
  - `ft_strdup`
  - `ft_strcpy`
  - `ft_strncpy`
  - `ft_strcat`
  - `ft_strncat`
  - `ft_strlcpy`
  - `ft_strlcat`
  - `ft_strchr`
  - `ft_strrchr`
  - `ft_strstr`
  - `ft_strnstr`
  - `ft_strcmp`
  - `ft_strncmp`

- **Character Functions:**
  - `ft_isalpha`
  - `ft_isdigit`
  - `ft_isalnum`
  - `ft_isascii`
  - `ft_isprint`
  - `ft_toupper`
  - `ft_tolower`

- **Conversion Functions:**
  - `ft_atoi`
  - `ft_itoa`

- **Memory Allocation Functions:**
  - `ft_calloc`
  - `ft_strdup`

- **Linked List Functions:**
  - `ft_lstnew`
  - `ft_lstadd_front`
  - `ft_lstadd_back`
  - `ft_lstdelone`
  - `ft_lstclear`
  - `ft_lstiter`
  - `ft_lstmap`

---

## 🚀 Usage

1. Clone this repository:

    ```bash
   git clone https://github.com/akahir/libft.git

2. Navigate into the project directory:

   ```bash
   cd libft
3. Compile the project:

    ```bash
    make
4. The library will be created as libft.a. You can link it to other C programs using:

   ```bash
   gcc -o my_program my_program.c -L. -lft
5. To remove object files and the library, run:

   ```bash
   make clean
6. To remove all generated files, including the libft.a library:

    ```bash
    make fclean
7. To recompile the project:

   ```bash
   make re

---

## 🧪 Testing

### Unit Tests
To ensure all functions work correctly, I wrote unit tests for each implemented function. The tests are located in the `tests` folder and can be run with `gcc`:

  ```bash
     gcc -o tests/test_program tests/*.c -L. -lft
     ./test_program
  ```
---

## 📜 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---

## 📫 Contact

If you have any questions or suggestions regarding the project, feel free to contact me at:

- **Email**: aymanekahir036@gmail.com
- **GitHub**: [@A-kahir] (https://github.com/A-kahir)

