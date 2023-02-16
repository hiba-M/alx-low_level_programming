#include<stdio.h>
/**
  * main - this prints sizeof types
  * Return: This returns 0
  */
int main(void)
{
char a;
int q;
long int g;
long long int n;
float o;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(q));
printf("Size of a long int: %lu byte(s)\n", sizeof(g));
printf("Size of a long long int: %lu byte(s)\n", sizeof(n));
printf("Size of a float: %lu byte(s)\n", sizeof(o));
return (0);
}
