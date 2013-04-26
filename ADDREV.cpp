/*
Original Author : Prithvi
Name : Atul Kashyap
*/

#include<stdio.h>
#include<iostream>
using namespace std;
int rev(int a)
{
    int reverse = 0;
    while (a != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + a%10;
      a = a/10;
   }
   return reverse;
}
int main()
{
    int t,a,b,sum;
    scanf("%d",&t);
    while(t--)
    {
              cin >> a >> b;
              a = rev(a);
              b = rev(b);
              sum = rev(a+b);
              printf("%d\n",sum);
              }
    
    return 0;
}
    


