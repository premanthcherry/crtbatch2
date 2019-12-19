#include<stdio.h>
main()
{
    int rno,s1,s2,s3;
    char name;
    float tot,avg;
    printf("enter the 3 subject marks ");
    scanf("%d%d%d",&s1,&s2,&s3);
    printf("enter your roll no:");
    scanf("%d";&rno);
    printf("\nenter your name:");
    scanf("%c",&name);
    tot=s1+s2+s3;
    avg=tot/3;
        printf("\n roll no:%d",rno);
         printf("\n name:%s",name);
          printf("\n total:%d",tot);
           printf("\n average:%d",avg);
}


