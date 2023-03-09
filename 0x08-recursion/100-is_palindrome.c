#include "main.h"

/**
 * get_length - funtion that will be used in check-palindrome
 * Description: gets string length
 * @s: string
 * Return: length
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + get_length(s + 1));
}

/**
 * check_palindrome - function
 * Description: checks if string is palindrome
 * @s: string
 * @start: Int start point
 * @end: int end point
 * Return: 1 if palindrome, 0 otherwise
 */

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (*(s + start) == *(s + end))
		return (check_palindrome(s, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - function in question
 * Description: checks if string is palindrome or not
 * @s: string
 * Return: 1 if palindrome 0 if not
 */

int is_palindrome(char *s)
{
	int len = get_length(s);

	if (len == 0 || len == 1)
		return (1);
	return (check_palindrome(s, 0, len - 1));
}
