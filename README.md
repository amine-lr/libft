\*This project was created as art of the 42 curriculum by molariou\*



Libft:



**Descretion:**

&#x20;   libft is a foundational C project from the 42 curriculum. The goal is to reimplement a set of

standard C library functions from scratch, and to build additional utility functions that will

serve as a personal toolkit for future projects.

The library is compiled into a static archive libft.a and covers three main areas:



* Part 1 – Libc functions: Reimplementations of standard functions following their original man page

specifications.

* Part 2 – Additional functions: Custom utility functions not found in the standard libc, and file-descriptor output functions.
* Part 3 – Linked list: A set of functions to create and manipulate a singly linked list using the t\_list structure:

typedef struct s\_list

{

&#x20;void \*content;

&#x20;struct s\_list \*next;

} t\_list



**Instructions:**



Compilation:

Clone the repository and run make at the root:



|git clone <repo-url><br />cd libft<br />make|
|-|



This will compile all source files and create the libft.a static library at the root of the

repository.



Available Makefile Rules:



make / make all Compiles the library ( libft.a )

make clean Removes object files

make fclean Removes object files and libft.a

make re Runs fclean then all



Using the Library in Your Project



After compiling, link libft.a with your project:

cc -Wall -Wextra -Werror your\_file.c -L. -lft -o your\_program

Include the header in your source files:

\#include "libft.h"



**Resources:**

* C Standard Library — man pages
* [Memory management in C — malloc , free , calloc](https://www.geeksforgeeks.org/c/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
* [Linked lists — GeeksForGeeks](https://www.geeksforgeeks.org/dsa/linked-list-data-structure/)
* Gemini AI



**AI Usage**

AI was used in this project in the following ways, in accordance with the 42 AI policy:

* To better understand the expected behavior of certain standard library functions before consulting their man pages.
* To clarify edge cases in function specifications (e.g., calloc behavior when nmemb or size is 0).



