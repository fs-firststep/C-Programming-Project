#include<stdio.h>

int main()
{
    // int a, p, d, ag, ph, da;
    // char n[50], add[50], na[50], addr[50];

    char n[50];
    int a;
    int p;
    int d;
    char add[50];

    char na[50];
    int ag;
    int ph;
    int da;
    char addr[50];

    printf("\nWelcome to Phone Book \n");
    printf("MENU \n");

    printf("Press 1 to add the contact \n");
    int x;
    printf("Enter : ");
    scanf("%d", &x);

    if(x == 1)
    {
        int y;
        printf("Enter the number of contact to be Added : ");
        scanf("%d", &y);

        if(y == 1)
        {
            printf("\n----------------------\n");
            printf("Name : ");
            scanf("%s", &n);

            printf("Age : ");
            scanf("%d", &a);

            printf("Phone Number : ");
            scanf("%d", &p);

            printf("Date of Birth : ");
            scanf("%d", &d);

            printf("Address : ");
            scanf("%s", &add);
            printf("\n----------------------\n");
        }
        else if(y == 2)
        {
            printf("\n------- #1 Person Detail -----------\n");
            printf("Name : ");
            scanf("%s", &n);

            printf("Age : ");
            scanf("%d", &a);

            printf("Phone Number : ");
            scanf("%d", &p);

            printf("Date of Birth : ");
            scanf("%d", &d);

            printf("Address : ");
            scanf("%s", &add);

            printf("\n\n-------- #2 Person Detail  --------------\n");
            printf("Name : ");
            scanf("%s", &na);

            printf("Age : ");
            scanf("%d", &ag);

            printf("Phone Number : ");
            scanf("%d", &ph);

            printf("Date of Birth : ");
            scanf("%d", &da);

            printf("Address : ");
            scanf("%s", &addr);

        }
    }

    printf("\n\n");
    printf("Press 2 to see the Entered Contact \n");
    printf("Press 3 to exit the phone Book \n");

    int z;
    printf("Enter : ");
    scanf("%d", &z);

    if(z == 2)
    {
        int num;
        printf("Enter the number of contact to be viewed : ");
        scanf("%d", &num);

        if(num == 1)
        {
            printf("\n----------------------\n");
            printf("Name : %s \n", n);
            printf("Age : %d \n", a);
            printf("Phone Number : %d \n",p);
            printf("Date of Birth : %d \n",d);
            printf("Address : %s \n",add);
            printf("\n----------------------\n");
        }
        else if(num == 2)
        {
            printf("\n-------- #1 Person Details --------------\n");
            printf("Name : %s \n", n);
            printf("Age : %d \n", a);
            printf("Phone Number : %d \n",p);
            printf("Date of Birth : %d \n",d);
            printf("Address : %s",add);

            printf("\n\n------- #2 Person Details ---------------\n");
            printf("Name : %s \n", na);
            printf("Age : %d \n", ag);
            printf("Phone Number : %d \n",ph);
            printf("Date of Birth : %d \n",da);
            printf("Address : %s \n",addr);
            printf("\n----------------------\n");
        }
    }

    else if(z == 3)
    {
        printf("Are you sure you want to close the phone Book \n");
        printf("Press 1 for Yes \n");
        printf("Press 2 for No \n");

        int ans;
        printf("Enter : ");
        scanf("%d", &ans);

        if(ans == 1)
        {
            printf("The Phone book has Closed \n");
            printf("Have a good day \n\n");
        }
        else if(ans == 2)
        {
            printf("The Phone book has not closed \n");
            printf("You can Continue \n");
        }
    }
    
    else
    {
        printf("Invalid \n");
    }


    return 0;
}