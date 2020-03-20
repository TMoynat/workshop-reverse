#include <stdio.h>
#include <string.h>

int main (int ac, char **av)
{
    char *buff = "!\"#$%&':;<=>?()*+,-./0123456789@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
    if (ac != 2)
        return 1;
    if (strpbrk(buff, av[1])) {
        printf("You wont br3ak me!\n");
        return 1;
    }
    printf("You're n0t that bad\nPoC{");
    for (int i = 0; i < 20; i++)
        printf("%c", buff[((i % strlen(buff) + 42) * i) % strlen(buff) - i]);
    printf("}\n");
    return 0;
}