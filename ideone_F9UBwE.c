#include<stdio.h>
int main()
{
   int n, first = 0, second = 1, next, c;
   printf("Enter the number\n");
   scanf("%d",&n);
   printf("First %d fibo are :-\n",n);
   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      printf("%d\n",next);
   }
 
   return 0;
}