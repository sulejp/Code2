#include <stdio.h>
#include <stdlib.h>

double squareArea(double a);
double cubeVolume(double a);
double checkValue(double a);

int main()
{
   double a;
   printf("What do you want to calculate? \n");
   printf("1. Square value \n");
   printf("2. Cube value \n");
   printf("3. Exit program \n");

   int choice;
   scanf("%d",&choice);

   switch(choice)
   {
   case 1:
      printf("Give side value: \n");
      scanf("%lf", &a);
      if(!checkValue(a))
      break;
      printf("Square area = %.2lf \n",squareArea(a));
      break;
   case 2:
      printf("Give side value: \n");
      scanf("%lf", &a);
      if(!checkValue(a))
      break;
      printf("Cube volume = %.2lf \n",cubeVolume(a));
      break;
   case 3:
      break;
   default:
      printf("Wrong choice!\n");
   }

   return 0;
}

double checkValue(double a)
{
   if(a<0)
   {
      printf("Side value must be > 0 \n");
      return 0;
   }
   return 1;
}
