#include <stdio.h>

int youDidItWellM()
{
    int a = 4;
	return (a * 2);
}

int main (void)
{
    printf("The flag should be like PoC{foo42}\n\tfoo:  function called\n\t42:  program output\n");
	return youDidItWellM();
}
