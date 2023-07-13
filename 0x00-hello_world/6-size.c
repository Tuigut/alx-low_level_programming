#include <stdio.h>
/**
 * main - a c program that prints the size of various types of computer i
t can be compiled and run on
 * return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("size of char :%lu bytes (s)\n", (unsigned long)sizeof(a));
printf("size of int :%lu bytes (s)\n", (unsigned long)sizeof(b));
printf("size of long int :%lu bytes (s)\n", (unsigned long)sizeof(c);
printf("size of long long int :%lu bytes (s)\n", (unsigned long)sizeof(d);
printf("size of float :%lu bytes (s)\n", (unsigned long)size of(e));
return (0);
}
