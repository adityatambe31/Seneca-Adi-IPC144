/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #2 (P1)
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca
Section    : ZHH
Authenticity Declaration:
I declare this submission is the result of my own work and has not been shared with any other student or 3rd party content provider. This submitted piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    double SmallPrice, MediumPrice, LargePrice;

    int Number, SubTotal, Total, Taxes; 
    const double TaxRate = 0.13;
   


    printf("Set Shirt Prices\n");
    printf("================\n");

    printf("Enter the price for a SMALL shirt: $");
    scanf("%lf",&SmallPrice);

    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%lf",&MediumPrice);

    printf("Enter the price for a LARGE shirt: $");
    scanf("%lf",&LargePrice);

    printf("\n");



    printf("Shirt Store Price List\n");
    printf("======================\n");

    printf("SMALL  : $%.2lf\n",SmallPrice);

    printf("MEDIUM : $%.2lf\n",MediumPrice);

    printf("LARGE  : $%.2lf\n",LargePrice);

    printf("\n");





    printf("Patty's shirt size is 'S'\n");

    printf("Number of shirts Patty is buying: ");

    scanf("%d", &Number);
    
    printf("\n");



    SubTotal = SmallPrice * 100 * Number;
    Taxes = SubTotal * TaxRate + 0.5; 
    Total = SubTotal + Taxes;

    printf("Patty's shopping cart...\n");
   
    printf("Contains : %d shirts\n",Number);

    printf("Sub-total: $%8.4lf\n", SubTotal/ (double)100);
    
    printf("Taxes    : $%8.4lf\n", Taxes/ (double)100);

    printf("Total    : $%8.4lf\n", Total/ (double)100);
    
    return 0;    
}
