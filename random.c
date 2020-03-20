#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int compare(char *s1, char *s2)
{
    for (int i = 0; i < 50; i += 1) {
        if (s1[i] != s2[i]) {
            return 0;
        }
    }
    return 1;
}

int main(int ac, char **av)
{
    const char charset[] = "IHaveNoIdeaWtfImDoingRightNow";
    const int len = strlen(charset);
    char res[51] = {};

    if (ac != 2) {
        printf("Gimme pass bro!\n");
        return (-1);
    }
    if (strlen(av[1]) != 50) {
        printf("Not even correct length!\n");
        return (-1);
    }
    for (int i = 0; i < 50; i++) {
        res[i] = charset[((i % strlen(strchr(charset, (charset[i % (len)])))) + i) % len];
    }
    res[50] = '\0';
    if (compare(av[1], res)) {
        printf("PoC{%s}\n", av[1]);
        return 0;
    }
    dprintf(2, "N0pe!\n");
    return 1;
}