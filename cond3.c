#include<stdio.h>
main()
{
    int a,b,c;
    printf("\n enter the a,b,c number: ");
    scanf("%d%d%d",&a,&b,&c);
    printf(a==b && b==c ? "all are equal" :a>b ? "a is bigger" :b>c ?"b is bigger":"c is bigger");
}
