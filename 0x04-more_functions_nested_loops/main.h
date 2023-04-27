#ifndef MAIN_H
#define MAIN_H
/* putchar function */
int _putchar(char c);
/*function that 1 returns if c is uppercase and 0 iif not */
int _isupper(int c);
/*function that 1 returns if c is a digit and 0 if not */
int _isdigit(int c);
/* function that multiplies two integers */
int mul(int a, int b);
/*function that print numbers from 0 to 9 followed by a new line */
void print_numbers(void);
/*function that prints numbers from 0 to 9 followed by a new line*/
void print_most_numbers(void);
/*function that prints 10 times the numbers, from 0 to 14, followed by a new line.*/
void more_numbers(void);
/*function that draws a straight line in the terminal.*/
void print_line(int n);
/*Write a function that draws a diagonal line on the terminal.*/
void print_diagonal(int n);
/*Write a function that prints a square, followed by a new line*/
void print_square(int size);
/*function that prints a triangle, followed by a new line*/
void print_triangle(int size);
#endif
