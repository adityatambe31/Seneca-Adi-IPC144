/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #6 (P1)
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca
Section    : ZHH
Authenticity Declaration:
I declare this subMinimum_Incomession is the result of my own work and has not been
shared with any other student or 3rd party content provider. This subMinimum_Incometted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define MAX_ITEM 10

int main()


{
            const double Minimum_Income = 500.00, Maximum_Income = 400000.00, Maximum_Cost = 100.00;

            double INCOME;
            
            int ITEMS, MAXIMUM_ITEMS = 1, i, flag_a, flag_b, flag_c, flag_d, flag_e;
            
            double ITEMS_COST[MAX_ITEM] = { 0 }, sMaximum_Cost = 0;
            
            int  PRIORITY[MAX_ITEM] = { 0 };
            
            const int MAX_PRIORITY = 3, MIN_PRIORITY = 1;
            
            char FINAL_COST[MAX_ITEM] = { 0 };



                printf("+--------------------------+\n"
                "+   Wish List Forecaster   |\n"
                "+--------------------------+\n\n");

        do
        {
        
        flag_a = 1;

                printf("Enter your monthly NET income: $");
                scanf("%lf", &INCOME);

            if (INCOME < Minimum_Income)

            {
                printf("ERROR: You must have a consistent monthly income of at least $%.2lf\n", Minimum_Income);
            
            flag_a = 0;
            }


            else if (INCOME > Maximum_Income)


            {
                printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2lf\n", Maximum_Income);
            
            flag_a = 0;
            }

                printf("\n");

        } 
    

        while (flag_a != 1);

        do
        {
    
        flag_b = 1;
       
                printf("How many wish list items do you want to forecast?: ");
                scanf("%d", &ITEMS);

        if (ITEMS < MAXIMUM_ITEMS || ITEMS > MAX_ITEM)

        {
                printf("ERROR: List is restricted to between %d and %d items.\n\n", MAXIMUM_ITEMS, MAX_ITEM);
       
        flag_b = 0;
        }

        } 
    
        while (flag_b != 1);



        for (i = 1; i <= ITEMS; i++)
    
        {
                printf("\nItem-%d Details:\n", i);
    
        do

        {
        flag_c = 1;
        
                printf("   Item cost: $");
                scanf("%lf", &ITEMS_COST[i]);

            if (ITEMS_COST[i] < Maximum_Cost)

            {
                printf("      ERROR: Cost must be at least $%.2lf\n", Maximum_Cost);
      
            flag_c = 0;
            }

            else            
            {
            sMaximum_Cost += ITEMS_COST[i];
            }

        } 
        

        while (flag_c != 1);

        do

        {
            flag_d = 1;
        
                printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
                scanf("%d", &PRIORITY[i]);

            if (PRIORITY[i] < MIN_PRIORITY || PRIORITY[i] > MAX_PRIORITY)
            {
                printf("      ERROR: Value must be between %d and %d\n", MIN_PRIORITY, MAX_PRIORITY);
            
                flag_d = 0;
            }



        } 


        while (flag_d != 1);

        do

        {
            flag_e = 1;
        
                printf("   Does this item have financing options? [y/n]: ");
                scanf(" %c", &FINAL_COST[i]);

        if (!(FINAL_COST[i] == 'y' || FINAL_COST[i] == 'n'))

        {
                printf("      ERROR: Must be a lowercase 'y' or 'n'\n");
            
                flag_e = 0;
        }

        } 
        
        
        while (flag_e != 1);
    
        }

                printf("\nItem Priority Financed        Cost\n");
                printf("---- -------- -------- -----------\n");
    
        for (i = 1; i <= ITEMS; i++)

        {
                printf("%3d  %5d    %5c    %11.2lf\n", i, PRIORITY[i], FINAL_COST[i], ITEMS_COST[i]);
        }
                printf("---- -------- -------- -----------\n");
                printf("                      $%11.2lf\n\n", sMaximum_Cost);

                printf("Best of luck in all your future endeavours!\n");

        return 0;
}