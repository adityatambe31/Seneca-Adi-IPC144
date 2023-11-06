/*//////////////////////////////////////////////////////////////////////////

                               Workshop - #6 (Part-2)
Full Name  :Aditya Mahesh Tambe
Student ID#:171969223
Email      :amtambe@myseneca.ca
Section    :ZHH

Authenticity Declaration :

I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider.This submitted
piece of work is entirely of my own creation.
//////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#define MAX_ITEM_LIMIT 10
#include <stdio.h>
int main(void)
{
    const double MIN_NET_MonthLY = 500.00, MAX_NET_MonthLY = 400000.00;
    const double MIN_ITEM_COST = 100.00; 

    double NET_Income, COST[MAX_ITEM_LIMIT], SUM_Cost = 0; 
    int WISH_List_want, i, priority[MAX_ITEM_LIMIT]; 
    int Forcast_Selection;  
    char Option_for_Finance[MAX_ITEM_LIMIT];


    printf("+--------------------------+\n"); 
    printf("+   Wish List Forecaster   |\n");
    printf("+--------------------------+\n\n");
    
    do
    {
                    printf("Enter your monthly NET income: $"); 
                    scanf("%lf", &NET_Income);  
            if(NET_Income < MIN_NET_MonthLY)
            {
                    printf("ERROR: You must have a consistent monthly income of at least $%.2f\n", MIN_NET_MonthLY); 
            }
            else if(NET_Income > MAX_NET_MonthLY)
            {
                    printf("ERROR: Liar! I'll believe you if you enter a value no more than $%.2f\n", MAX_NET_MonthLY); 
            }

                    printf("\n");  
                }

    while(NET_Income < MIN_NET_MonthLY || NET_Income > MAX_NET_MonthLY);  
    
    do 
    {
                    printf("How many wish list items do you want to forecast?: ");    
                    scanf("%d", &WISH_List_want);              
    if(WISH_List_want < 1 || WISH_List_want > MAX_ITEM_LIMIT) 
    {
                    printf("ERROR: List is restricted to between 1 and 10 items.\n"); 
    }

        printf("\n");  
    }

    while(WISH_List_want < 1 || WISH_List_want > MAX_ITEM_LIMIT);

            for(i=0; i<WISH_List_want; i++)
            {
                    printf("Item-%d Details:\n", i+1);  
            do
            {
                    printf("   Item cost: $");    
                    scanf("%lf", &COST[i]); 
            if(COST[i] < MIN_ITEM_COST)
            {
                    printf("      ERROR: Cost must be at least $%.2f\n", MIN_ITEM_COST); 
            }
            }
            while(COST[i] < MIN_ITEM_COST);   
            
            do
            {
                    printf("   How important is it to you? [1=must have, 2=important, 3=want]: ");
                    scanf("%d", &priority[i]);        
     if(priority[i] < 1 || priority[i] > 3)
            {
                    printf("      ERROR: Value must be between 1 and 3\n"); 
            }
            }
            while(priority[i] < 1 || priority[i] > 3); 

            do
            {
                    printf("   Does this item have financing options? [y/n]: "); 
                    scanf(" %c", &Option_for_Finance[i]);      
    if(Option_for_Finance[i] != 'y' && Option_for_Finance[i] != 'n')
            {
                    printf("      ERROR: Must be a lowercase 'y' or 'n'\n");  
            }
            }
            while(Option_for_Finance[i] != 'y' && Option_for_Finance[i] != 'n');    
                                
                    printf("\n");  
                    SUM_Cost += COST[i]; 
            }
                                        printf("Item Priority Financed        Cost\n");
                                        printf("---- -------- -------- -----------\n");
                                            for(i=0; i<WISH_List_want; i++)
                                        {
                                            printf("%3d  %5d    %5c    %11.2lf\n", i+1, priority[i], Option_for_Finance[i], COST[i]);  
                                        }
                                            printf("---- -------- -------- -----------\n");  
                                            printf("                      $%11.2lf\n\n", SUM_Cost);
                                        
                                        do 
                                        {
                                                printf("How do you want to forecast your wish list?\n");  
                                                printf(" 1. All items (no filter)\n");  
                                                printf(" 2. By priority\n");    
                                                printf(" 0. Quit/Exit\n");  
                                                printf("Selection: ");  
                                                scanf("%d", &Forcast_Selection); 
                                                printf("\n");     

                                            if(Forcast_Selection == 1)
                                            {
                                                int Year, Month;  
                                                int Is_Fincance_Option = 0;
                                                int All_the_Months = SUM_Cost / NET_Income;
                                                Year = (All_the_Months + 1) / 12; 
                                                Month = (All_the_Months + 1) % 12;  

                                                    printf("====================================================\n"); 
                                                    printf("Filter:   All items\n");       
                                                    printf("Amount:   $%1.2lf\n", SUM_Cost);
                                                    printf("Forecast: %d years, %d months\n", Year, Month); 

                                                for(i=0; i<WISH_List_want; i++)
                                                {
                                                    if(Option_for_Finance[i] == 'y')
                                                    {
                                                        Is_Fincance_Option = 1;   
                                                    }
                                                }
                                                        if(Is_Fincance_Option == 1)
                                                        {
                                                                printf("NOTE: Financing options are available on some items.\n");
                                                                printf("      You can likely reduce the estimated months.\n");
                                                            }
                                                                printf("====================================================\n\n");
                                                            }
                                                            else if(Forcast_Selection == 2)
                                                            {
                                                                    int priorityFilter;     
                                                                    int Year, Month, All_the_Months; 
                                                                    int Is_Fincance_Option = 0; 
                                                                    double sumFilterCOST = 0; 
                                                                    
                                                                    do
                                                                    {
                                                                            printf("What priority do you want to filter by? [1-3]: "); 
                                                                            scanf("%d", &priorityFilter);  

                                                                    if(priorityFilter < 1 || priorityFilter > 3)
                                                                    {
                                                                            printf("ERROR: Value must be between 1 and 3\n");
                                                                    } 
                                                                            printf("\n");  
                                                                    }
                                                                    while(priorityFilter < 1 || priorityFilter > 3);  

                                                                    for(i=0; i<WISH_List_want; i++)
                                                                    {
                                                                    if(priority[i] == priorityFilter)
                                                                        {
                                                                            sumFilterCOST += COST[i];  
                                                                    if(Option_for_Finance[i] == 'y')
                                                                        {
                                                                            Is_Fincance_Option = 1;
                                                                        }
                                                                        }
                                                                    }
                                                                                    All_the_Months = sumFilterCOST / NET_Income;
                                                                                    Year = (All_the_Months + 1) / 12;  
                                                                                    Month = (All_the_Months + 1) % 12; 


                                                                            printf("====================================================\n"); 
                                                                            printf("Filter:   by priority (%d)\n", priorityFilter);    
                                                                            printf("Amount:   $%1.2lf\n", sumFilterCOST);  
                                                                            printf("Forecast: %d years, %d months\n", Year, Month); 
                                                                    if(Is_Fincance_Option == 1)
                                                                            {
                                                                                printf("NOTE: Financing options are available on some items.\n"); 
                                                                                printf("      You can likely reduce the estimated months.\n");
                                                                            }
                                                                                printf("====================================================\n\n"); 
                                                                    }
                                                                    else if(Forcast_Selection != 0)
                                                                    {
                                                                            printf("ERROR: Invalid menu selection.\n\n");
                                                                    }
                                                                    }
                                                                    while(Forcast_Selection != 0);  
                                                                            printf("Best of luck in all your future endeavours!\n"); 
                    return 0;
    
}