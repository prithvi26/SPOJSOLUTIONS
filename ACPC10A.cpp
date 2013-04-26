/*
Original Author : Prithvi
Name : Atul Kashyap
*/

#include<stdio.h>
int main()
{
        int a,b,c;
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        while((b-a)!=0)
        {
        if((c-b)==(b-a))
        {
        printf("AP %d\n",c+b-a);
        }
        else if((b/a)==(c/b)&&a!=0)
        {
        printf("GP %d\n",c*b/a);
        }
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        }
        return 0;
}

