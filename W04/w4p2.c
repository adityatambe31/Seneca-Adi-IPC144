/*****************************************************************************
                         Workshop - #4 (Part-2)>
Full Name  :  Aditya Mahesh Tambe
Student ID#: 171969223 
Email      : amtambe@myseneca.ca
Section    :ZHH
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************/
#include <stdio.h>
int main(void)
{
    int apples, oranges, pears, tomatoes, cabbage;
    int APPLEpicked, ORANGEpicked, PEARpicked, TOMATOpicked, CABBAGEpicked;
    int DoneShopping = 0; 
    

    do
    {
        printf("Grocery Shopping\n");
        printf("================\n");
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);


    while(apples < 0) 
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);
    }

        printf("\nHow many ORANGES do you need? : ");
        scanf("%d", &oranges);


    while(oranges < 0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many ORANGES do you need? : ");
        scanf("%d", &oranges);
    }

        printf("\nHow many PEARS do you need? : ");
        scanf("%d", &pears);


    while(pears < 0) 
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many PEARS do you need? : ");
        scanf("%d", &pears);
    }

        printf("\nHow many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);


    while(tomatoes < 0)
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);
    }


        printf("\nHow many CABBAGES do you need? : ");
        scanf("%d", &cabbage);


    while(cabbage < 0) 
    {
        printf("ERROR: Value must be 0 or more.\n");
        printf("How many CABBAGES do you need? : ");
        scanf("%d", &cabbage);


    }
        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");


    while(apples > 0)
    {
        printf("Pick some APPLES... how many did you pick? : ");
        scanf("%d", &APPLEpicked);
        if(APPLEpicked > apples)
        {
            printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
            continue;
        } 
        else if(APPLEpicked < 1)
        {
            printf("ERROR: You must pick at least 1!\n");
            continue;
        }
        apples = apples - APPLEpicked;
        if(apples > 0)
        {
            printf("Looks like we still need some APPLES...\n");
        }
        else
        {
            printf("Great, that's the apples done!\n\n");
        }
    }
        while(oranges > 0) 
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &ORANGEpicked);
            if(ORANGEpicked > oranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
                continue;
            } 
            else if(ORANGEpicked < 1)
            {
                printf("ERROR: You must pick at least 1!\n");
                continue;
            }
            oranges = oranges - ORANGEpicked;
            if(oranges > 0) 
            {
                printf("Looks like we still need some ORANGES...\n");
            }
            else
            {
                printf("Great, that's the oranges done!\n\n");
            }
        }
            while(pears > 0)
            {
                printf("Pick some PEARS... how many did you pick? : ");
                scanf("%d", &PEARpicked);
                if(PEARpicked > pears)
                {
                    printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
                    continue;
                }
                else if(PEARpicked < 1) 
                {
                    printf("ERROR: You must pick at least 1!\n");
                    continue;
                }
                pears = pears - PEARpicked;
                if(pears > 0)
                {
                    printf("Looks like we still need some PEARS...\n");
                }
                else
                {
                    printf("Great, that's the pears done!\n\n");
                }
            }
                while(tomatoes > 0) 
                {
                    printf("Pick some TOMATOES... how many did you pick? : ");
                    scanf("%d", &TOMATOpicked);
                    if(TOMATOpicked > tomatoes)
                    {
                        printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
                        continue;
                    } 
                    else if(TOMATOpicked < 1)
                    {
                        printf("ERROR: You must pick at least 1!\n");
                        continue;
                    }
                    tomatoes = tomatoes - TOMATOpicked;
                    if(tomatoes > 0) 
                    {
                        printf("Looks like we still need some TOMATOES...\n");
                    } 
                    else
                    {
                        printf("Great, that's the tomatoes done!\n\n");
                    }
                }
                    while(cabbage > 0)
                    {
                        printf("Pick some CABBAGES... how many did you pick? : ");
                        scanf("%d", &CABBAGEpicked);
                        if(CABBAGEpicked > cabbage)
                        {
                            printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbage);
                            continue;
                        } 
                        else if(CABBAGEpicked < 1)
                        {
                            printf("ERROR: You must pick at least 1!\n");
                            continue;
                        }
                        cabbage = cabbage - CABBAGEpicked;
                        if(cabbage > 0)
                        {
                            printf("Looks like we still need some CABBAGES...\n");
                        }
                        else
                        {
                            printf("Great, that's the cabbages done!\n\n");
                        }
                    }


                        printf("All the items are picked!\n\n");
                        printf("Do another shopping? (0=NO): ");
                        scanf("%d", &DoneShopping);printf("\n");

}


    while (DoneShopping != 0);
                printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}
