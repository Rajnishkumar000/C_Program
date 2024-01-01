#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include<conio.h> 
/*
You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route 
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/
struct travelagency
{
    char name[20];
    char dl[10];
    char route[50];
    float kms;
};

int main()
{
    struct travelagency driver[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d driver details:\n",i+1);
        printf("1. Name: \n");
        scanf(" %s",&driver[i].name);
        printf("2. Driving Licence no.: \n");
        scanf(" %s",&driver[i].dl);
        printf("3. Route: \n");
        scanf(" %s",&driver[i].route);
        printf("3. Kms Driven: \n");
        scanf("%f", &driver[i].kms);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n\n%d no. Driver details: \n\n",i+1);
        printf("\n1. Name:  ");
        puts(driver[i].name);
        printf("\n2. Driving Licence no.:  ");
        puts(driver[i].dl);
        printf("\n3. Route:  ");
        puts(driver[i].route);
        printf("\n3. Kms Driven: %f ", driver[i].kms);
        printf("%f", driver[i].kms);
    }
    getch();
    return 0;
}