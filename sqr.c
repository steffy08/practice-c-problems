
#include<stdio.h>
int main()
{
    int a,n;
    printf("enter the no.");
    scanf("%d",&n);
    for(a=0;a<=n;a++)
        if(n==a*a)
        {
            printf("yes");
            return 0;
        }
            printf("no");
            return 0;
}
