// printing numbers from number 1 to 20 without using loops
#include<stdio.h>
main()
{
    int a,b;
    char ch;
    printf("enter the numbers:");
    scanf("%d%d",&a,&b);
    printf("enter operator of your choice:");
    ch=getche();
    //fflush(stdin);
    //scanf("%c",&ch);
    switch(ch)
    {

        case '+':printf("\n sum:%d",a+b);break;
        case '-':printf("\n difference:%d",a-b);break;
        default:printf("Invalid choice");
    }
}
