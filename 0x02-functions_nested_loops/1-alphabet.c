#include "main.h"
#include <unistd.h>
/**
 * print_alphabet: Entry point
 * Description: Prints all alphabet in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
