#include "main.h"
#include<stdio.h>
/**
 * end_offile - end of file
 *
 * Return: Nothing.
 */

int end_offile(void)
{
int d;

while ((d = getchar()) != EOF)
{
printf("\"getchar()!=EOF\" result is %d\n", d);
printf("EOF:%d\n", EOF);
}
printf("\"getchar()!=EOF\" result is %d\n", d);
return (1);
}
