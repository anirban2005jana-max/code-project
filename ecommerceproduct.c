#include <stdio.h>
int main()
{
    int n, i, j;
    float price[100], temp;

    printf("Enter number of products: ");
    scanf("%d", &n);

    printf("Enter product prices:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%f", &price[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (price[i] > price[j])
            {
                temp = price[i];
                price[i] = price[j];
                price[j] = temp;
            }
        }
    }

    printf("\nProduct prices in ascending order:\n");

    for (i = 0; i < n; i++)
    {
        printf("%.2f ", price[i]);
    }

    printf("\n");

    return 0;
}
