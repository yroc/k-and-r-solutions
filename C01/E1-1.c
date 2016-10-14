/* C program to print the string constant "hello, world" to the screen. */

#include <stdio.h>

main()
{
  printf("\nhello, world\n\n");
}

/* Notice the use of one newline at the beginning of the string and two newlines
   at the end. The effect is one empty line above "hello, world", and one empty
   line below. The reason only one empty line is needed before is because an
   empty line is contributed by the user when pressing enter in the shell to
   activate the program. */
