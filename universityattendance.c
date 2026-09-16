#include <stdio.h>
int main()
{
    int n, i, count = 0, lowestPos;
    float threshold, sum = 0, average, lowest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    float attendance[n];

    printf("Enter attendance percentages:\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &attendance[i]);

        sum += attendance[i];
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

    for (i = 0; i < n; i++)
    {
        if (attendance[i] < threshold)
        {
            count++;
        }
    }
    lowest = attendance[0];
    lowestPos = 0;

    for (i = 1; i < n; i++)
    {
        if (attendance[i] < lowest)
        {
            lowest = attendance[i];
            lowestPos = i;
        }
    }
    average = sum / n;

    printf("\n--- Attendance Analysis ---\n");
    printf("Students below threshold: %d\n", count);
    printf("Lowest attendance: %.2f%%\n", lowest);
    printf("Position of lowest attendance: %d\n", lowestPos + 1);
    printf("Average attendance: %.2f%%\n", average);

    return 0;
}
