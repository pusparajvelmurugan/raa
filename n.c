#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the min is");
    scanf("%d",&a);
    printf("enter the hour is");
    scanf("%d",&b);
    c = (b*60) + a;
      printf("\nTotal hours and Minutes:\t%d%d\n",c);
      return 0;
}
