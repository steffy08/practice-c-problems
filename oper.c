#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,b,c,e,f;
    int ch;
    printf("enter the values a,b");
    scanf("%d %d",&a,&b);
    printf("1.sum\n");
    printf("2.sub\n");
    printf("3.division\n");
    printf("4.multiplication\n");
    printf("5.power\n");

       printf("enter your choice");
       scanf("%d\n",&ch);
        do
        {
    switch(ch)
    {
    case 1:
        c=a+b;
        printf("the sum is %d \n",c);
        break;
    case 2:
        c=a-b;
        printf("the sub is %d \n",c);
        break;
    case 3:
        c=a/b;
        printf("the division is %d \n",c);
        break;
    case 4:
        c=a*b;
        printf("the multiplication is %d \n",c);
        break;
    case 5:
        c=pow(a,b);
        printf("the power is %d \n",c);
        break;
    case 6:
        e=sqrt(a);
        f=sqrt(b);
        printf("the sqrt of a is %d \n the sqrt of b is %d \n ",e,f);
        break;
    default:
        printf("enter the valid option");
        break;
    }
        }while(ch<=6);



}

