#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdbool.h>

int main()

{
    int expensive = 0, income = 0, cost = 0, saving = 0, budget = 0;
    int input = 0;
    bool login = false, signup = false, dashboard = false;
    char username[20] = "admin";
    char password[40] = "admin";
    char i_username[20];
    char i_password[40];

    printf("welcome to daily expensive manager \n");

    void menu()
    {
        printf("\n \n Menu => \n 1. dashboard press=> 2 \n 2. logout press=> 0 \n 3. login press=> 1 \n 3. sign up press=> 4 \n 4. add cost press=> 5 \n");
        scanf("%d", &input);
        printf("You pressed %d \n \n", input);
        if (input == 5)
        {
            printf("Enter your new cost");
            scanf("%d", &cost);

            printf("\n");
            menu();
        }
    }

    menu();

    void dashboardview()
    {
        printf("Total Costs: %d \t \t Total Expensive: %d \t \t Total Income: %d \t \t Total Saving: %d", cost, expensive, income, saving);
    }

    if (input == 2)
    {
        if (dashboard == true)
        {
            dashboardview();
            menu();
        }
        else
        {
            printf("Login first to see dashboard \n");
            menu();
        }
    }
    if (input == 4)
    {
        printf(" \t \t \t \t \t  User Registration: \n");
        printf("\n \n");
        printf(" \t \t \t  Enter user name: ");
        getchar();
        gets(i_username);

        printf("\n \n");
        printf(" \t \t \t  Enter password: ");
        gets(i_password);
        printf("\n");
        signup = true;
    }
    if (signup == true)
    {
        printf("Enter your monthly income");
        scanf("%d", &income);
        printf("\n");
        printf("Enter your Monthly Budget");
        scanf("%d", &budget);
        printf("\n");
        usleep(10000);
        dashboardview();
        menu();
    }
    if (input == 1)
    {
        printf(" \t \t \t \t \t  User Login: \n");
        printf("\n \n");
        printf(" \t \t \t  Enter user name: ");
        getchar();
        gets(i_username);

        printf("\n \n");
        printf(" \t \t \t  Enter password: ");
        gets(i_password);
        int value1 = strcmp(username, i_username);
        int value2 = strcmp(password, i_password);

        if (value1 == 0 && value2 == 0)
        {
            dashboardview();
        }
        else
        {
            printf("\n \t \t \t  user name or password invalid \n");
        }
        menu();
    }
    return 0;
}
