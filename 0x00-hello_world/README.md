0.We(I) created a main.c file and make it a value of a global variable CF

ILE then we run the CFILE as a preprocessor only and save the out put in another file called c, look at the comments for detailed explai

nation below due to the limitation of word count wc-l =2.
/*First we created a main.c file using the code below*/

/**



#include <stdio.h>



/**

 * main - Entry point

 *

 * Return: Always 0 (Success)

 */

int main(void)

{

    return (0);

}



**/



**/



/* Then we use the export CFILE =main.c  to save the script in a global variable CFILE */



/* We saved the output into a file c using -E to preprocess only and  -o to place the output into a file. */



/* We then cat c to be sure the output was save into c */



/* Finally we verify using the example in the exercise by doing a tail c */



/* Please note this is done in my offline ubuntu, so you won't find my code doing history but if my webterm is stable

*I just might try it on it ..Thank you for taking time to read */

1.I would skip the comment but we wrote a script in main.c and make a value of global variable $CFILE  that compile but does not link using -S and outputting it to main.o file using -o. Thank you for reading.
 

