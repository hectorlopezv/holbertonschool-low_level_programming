#ifndef HOLBERTON_H
#define HOLBERTON_H
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include <stdio.h>

int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
void positive_or_negative(int i);
int largest_number(int a, int b, int c);

#endif /* HOLBERTON_H */
