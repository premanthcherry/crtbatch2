#include<stdio.h>
main()
{
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    if(n%5==0 && n%11==0)
    {
        printf("divisible");
    }
    else
        {
            printf("not divisible");

    }
}
