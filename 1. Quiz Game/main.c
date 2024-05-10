#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1, point2, point3, point4, point5;
    int point01, point02, point03, point04, point05;
    int total = 0;

    printf("\n\nWelcome to Game \n\n");
    printf("> Press 7 to Start the Game : \n");
    printf("> Press 0 to End the Game : \n");
    printf(">> ");
    scanf("%d", &i);

    // clrscr();  ( warning: implicit declaration of function 'clrscr' [-Wimplicit-function-declaration])
    printf("\n\n");

    if(i==7){
        printf("The Game has Started \n\n");
    }else if(i==0){
        printf("The Game has Ended \n\n");
    }else{
        printf("Invalid Input");
    }

    //Now, Playing the game, when you have enter the number 7
    if(i==7){

        //Question 1
            printf("1. Which one is the first Search engine in Internet ? \n");
            printf("i) Google \n");
            printf("ii) Archie \n");
            printf("iii) Wais \n");
            printf("iv) Altavista \n");

            printf("Enter your Answer : ");
            scanf("%d", &ans1);

            if(ans1 == 2){
                printf("Correct Answer \n");
                point1 = 5;
                total = total + point1;
                printf("You have Scored %d Points  \n", point1);
            }else{
                printf("Wrong Answer \n");
                point01 = 0;
                total = total + point01;
                printf("You have Scored %d Points \n", point01);
            }
            printf("\n\n");
              
        //Question 2
            printf("2. Which one is first web browser invented in 1990 ? \n");
            printf("i) Internet Explorer \n");
            printf("ii) Mosaic \n");
            printf("iii) Mozilla \n");
            printf("iv) Nexus \n");\

            printf("Enter Your Answer : ");
            scanf("%d", &ans2);

            if(ans2 == 4){
                printf("Correct Answer \n");
                point2 = 05; 
                total = total + point2;
                printf("You have Scored %d Points \n", point2);
            }else{
                printf("Wrong Answer \n");
                point02 = 0;
                total = total + point02;
                printf("You have Scored %d Points \n", point02);
            }
            printf("\n\n");

        //Question 3
            printf("3. First Computer Virus is Known as ? \n");
            printf("i) Rabbit \n");
            printf("ii) Creeper Virus \n");
            printf("iii) Elk Cloner \n");
            printf("iv) SCA Virus \n");

            printf("Enter Your Answer : ");
            scanf("%d", &ans3);

            if(ans3 == 2)
            {
                printf("Correct Answer \n");
                point3 = 5;
                total = total + point3;
                printf("You have Scored %d Points \n", point3);
            }else{
                printf("Wrong Answer \n");
                point03 = 0;
                total = total + point03;
                printf("You have Scored %d Points \n", point03);
            }
            printf("\n\n");

        //Question 4
            printf("4. Firewall in Computer is Used for ? \n");
            printf("i) Security \n");
            printf("ii) Data Transmission \n");
            printf("iii) Monitoring \n");
            printf("iv) Authentication \n");

            printf("Enter Your Answer : ");
            scanf("%d", &ans4);

            if(ans4 == 1){
                printf("Correct Answer \n");
                point4 = 5;
                total = total + point4;
                printf("You have Scored %d Points \n", point4);
            }else{
                printf("Wrong Answer \n");
                point04 = 0;
                total = total + point04;
                printf("You have Scored %d Points \n", point04);
            }
            printf("\n\n");

        //Question 5
            printf("5. Which of the Following is not a Database Management software ? \n");
            printf("i) Mysql \n");
            printf("ii) Oracle \n");
            printf("iii) Cobal \n");
            printf("iv) Sybase \n");

            printf("Enter Your Answer : ");
            scanf("%d", &ans5);

            if(ans5 == 3){
                printf("Correct Answer \n");
                point5 = 5;
                total = total + point5;
                printf("You have Scored %d Points \n", point5);
            }else{
                printf("Wrong Answer \n");
                point05 = 0;
                total = total + point05;
                printf("You have Scored %d Points \n", point05);
            }
            printf("\n");
    }

    printf("\n------------------------------------------------ \n");
    printf("\n Your Score : %d/25 \n", total);
    printf("\n------------------------------------------------ \n");

    return 0;
}