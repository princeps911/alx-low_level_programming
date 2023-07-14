#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print ("Size of a char: %lu byte(s)\n", sizeof(char));
	print ("Size of an int: %lu byte(s)\n", sizeof(int));
	print ("Size of a long: %lu byte(s)\n", sizeof(long int));
	print ("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	print ("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
