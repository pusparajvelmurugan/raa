#include <stdio.h>
int main()
{
    int less, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &less, &high);

    printf("Prime numbers between %d and %d are: ", less, high);

    while (less < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}
