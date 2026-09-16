#include <stdio.h>
int main()
{
    int n, i;
    int maxPatients, minPatients;
    int maxHour;
    int aboveAverage = 0;
    float sum = 0, average;

    printf("Enter number of hours: ");
    scanf("%d", &n);

    int patients[n];

    printf("Enter number of patients for each hour:\n");

    for (i = 0; i < n; i++)
    {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);

        sum += patients[i];
    }
    maxPatients = patients[0];
    minPatients = patients[0];
    maxHour = 0;
    for (i = 1; i < n; i++)
    {
        if (patients[i] > maxPatients)
        {
            maxPatients = patients[i];
            maxHour = i;
        }

        if (patients[i] < minPatients)
        {
            minPatients = patients[i];
        }
    }
    average = sum / n;
    for (i = 0; i < n; i++)
    {
        if (patients[i] > average)
        {
            aboveAverage++;
        }
    }

    printf("\n--- Hospital Emergency Analysis ---\n");
    printf("Maximum number of patients: %d\n", maxPatients);
    printf("Hour when maximum occurred: %d\n", maxHour + 1);
    printf("Minimum number of patients: %d\n", minPatients);
    printf("Peak hour: %d\n", maxHour + 1);
    printf("Average number of patients: %.2f\n", average);
    printf("Hours above average: %d\n", aboveAverage);

    return 0;
}
