#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char code[100];
    int valid = 1;
    int i;
    printf("Enter book code: ");
    scanf("%99s", code);
    if (strlen(code) != 12)
    {
        valid = 0;
    }
    for (i = 0; i < 3 && valid; i++)
    {
        if (!(code[i] >= 'A' && code[i] <= 'Z'))
        {
            valid = 0;
        }
    }
    if (valid && code[3] != '-')
    {
        valid = 0;
    }
    for (i = 4; i < 8 && valid; i++)
    {
        if (!isdigit((unsigned char)code[i]))
        {
            valid = 0;
        }
    }
    if (valid && code[8] != '-')
    {
        valid = 0;
    }
    for (i = 9; i < 12 && valid; i++)
    {
        if (!isdigit((unsigned char)code[i]))
        {
            valid = 0;
        }
    }

    if (valid)
    {
        printf("Valid book code.\n");
    }
    else
    {
        printf("Invalid book code.\n");
    }

    return 0;
}
