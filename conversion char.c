#include<stdio.h>
main()
{
    char a;
    printf("enter the character or a value:");
    scanf("%s",&a);
    if(a>=48 && a<=57)
    {
        printf("digits");
    }
    else if(a>=65 && a<=90)
        {
        printf("uppercase characters");
    }
    else if(a>=97 && a<=122)
    {
        printf("Lowercase characters");
    }
}
