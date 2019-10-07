/***********************************************************************************
 *                                                                                 *
 * NAME: main.c                                                                    *
 *                                                                                 *
 * AUTHOR: Michael Brockus.                                                        *
 *                                                                                 *
 * CONTACT: <mailto:michaelbrockus@icloud.com>                                     *
 *                                                                                 *
 * NOTICES:                                                                        *
 *                                                                                 *
 * License: Apache 2.0 :http://www.apache.org/licenses/LICENSE-2.0                 *
 *                                                                                 *
 ***********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


/**
 *
 * This source code demonstrates a simple hello world program where the message
 * printed is "Hello, C" displayed to the standard output console.
 *
 * @Param argc The argument count.
 * @Param argv The argument passed.
 *
 * @Returns: EXIT_SUCCESS from the C standared library.
 */
int main(int argc, const char ** argv)
{
    puts("Hello, C.");
    return EXIT_SUCCESS;
}/* end of function main */
