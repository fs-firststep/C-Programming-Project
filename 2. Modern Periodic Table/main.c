#include<stdio.h>

int main()
{
   int n, m, a, Exit, Exi ;

   printf("Welcome to Modern Periodic Table \n");
   printf("> Enter 1 to know about an element \n");
   printf("> Enter 2 to close the Periodic Table \n");
   printf(">> ");
   scanf("%d", &n);

   if(n==1)
   {
      printf("> Press 3 to search the element by atomic Number \n");
      printf(">> ");
      scanf("%d", &m);

      if(m == 3)
      {
        printf("Enter the atomic Number of the element to be searched : ");
        scanf("%d", &a);

        if(a==1)
        {
            printf("Name : Hydrogen \n");
            printf("Symbol : H \n");
            printf("Atomic Number : 1 \n");
            printf("Electronic Configuration : 1s^1 \n");
            printf("Discovered by : Henry Cavendish \n");
            printf("Charge : +1 \n");
        }
      }
   }
  else if(n == 2)
   {
    printf("Do you want to exit ? (Yes/No) \n");
    printf("> Press 6 for Yes \n");
    printf("> Press 7 for No \n");
    printf(">> ");
    scanf("%d", &Exit);

    if(Exit == 6)
        {
            printf("Are You sure, You Want to Close the Periodic Table ? (Yes/No) \n");
            printf("> Press 4 for Yes \n");
            printf("> Press 5 for No \n");
            printf(">> ");
            scanf("%d", &Exi);

            if(Exi == 4)
            {
                printf("The Periodic Table has closed ");
            }
            else if(Exi == 5)
            {
                printf("Periodic Table has no closed and you can continue and learn more about Elements \n\n");
                printf("Enter the Atomic Number of the Element to be searched : \n");
                scanf("%d", &a);

                if(a == 1)
                {
                    printf("Name : Hydrogen \n");
                    printf("Symbol : H \n");
                    printf("Atomic Number : 1 \n");
                    printf("Electronic Configuration : 1s^1 \n");
                    printf("Discovered by : Henry Cavendish \n");
                    printf("Charge : +1 \n");
                }
            }
        }
    else if(Exit == 7)
        {
            printf("Periodic Table has not closed and you can continue to learn more Element \n\n");
            printf("Enter the Atomic Number of the element to be searched : ");
            scanf("%d", &a);

            if(a == 1)
            {
                printf("Name : Hydrogen \n");
                printf("Symbol : H \n");
                printf("Atomic Number : 1 \n");
                printf("Electronic Configuration : 1s^1 \n");
                printf("Discovered by : Henry Cavendish \n");
                printf("Charge : +1 \n");    
            }
        }
   }

    return 0;
}