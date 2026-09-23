#include <stdio.h>
#include <string.h>
#include <ctype.h>

int caseInsensitiveCompare(char str1[], char str2[])
{
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (tolower((unsigned char)str1[i]) !=
            tolower((unsigned char)str2[i]))
        {
            return 0;
        }
        i++;
    }

    return str1[i] == '\0' && str2[i] == '\0';
}

int main()
{
    int n, i, choice, found = 0;
    char students[100][50];
    char searchName[50];

    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter student names:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%49s", students[i]);
    }

    printf("\nEnter name to search: ");
    scanf("%49s", searchName);

    printf("\n1. Case-Sensitive Search");
    printf("\n2. Case-Insensitive Search");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    for (i = 0; i < n; i++)
    {
        if (choice == 1)
        {
            if (strcmp(students[i], searchName) == 0)
            {
                printf("Student found at position %d\n", i + 1);
                found = 1;
                break;
            }
        }
        else if (choice == 2)
        {
            if (caseInsensitiveCompare(students[i], searchName))
            {
                printf("Student found at position %d\n", i + 1);
                found = 1;
                break;
            }
        }
        else
        {
            printf("Invalid choice.\n");
            return 0;
        }
    }

    if (!found)
    {
        printf("Student not found.\n");
    }

    return 0;
}
