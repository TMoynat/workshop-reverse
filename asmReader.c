#include <stdio.h>

int absolutlyNotUsefull()
{
    int a = 8;
	return (a * 2);
}

int main (void)
{
    printf("The flag should be like PoC{foo42}\n\tfoo:  function called\n\t42:  program output\n");
	return absolutlyNotUsefull();
}
