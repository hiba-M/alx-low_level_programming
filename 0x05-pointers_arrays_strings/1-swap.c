#include "main.h"
/**
 *swap_int(int *a, int *b)
 *@a: first input
 *@b: second input
 *Return: none
*/
void swap_int(int *a, int *b)
{
    int x;

    x = *a;
    a = *b;
    b = x;
}