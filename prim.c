#include <stdio.h>
void main()
{
    int les, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &les, &high);

    printf("Prime numbers between %d and %d are: ", les, high);

    while (les < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(les % i == 0)
            {
                flag = 1;
                break;
            }
        }
        getch();
    }
