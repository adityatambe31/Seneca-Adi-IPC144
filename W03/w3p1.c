/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #3 (P1)
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca
Section    : ZHH

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#include <stdio.h>

int main(void) 

{
    const int P1Product_id = 111, P2Product_id = 222, P3Product_id = 111;
    const double P1Product_Price = 111.49, P2Product_Price =222.99, P3Product_Price = 334.49;
    const char P1taxed = 'Y', P2taxed = 'N', P3taxed = 'N';
    const double testValue = 330.99;
    const double average = (P1Product_Price + P2Product_Price + P3Product_Price) / 3.0; 
    


    printf("Product Information\n");
    printf("===================\n");


    printf("Product-1 (ID:%d)\n", P1Product_id);
    printf("  Taxed: %c\n", P1taxed); 
    printf("  Price: $%.4lf\n\n", P1Product_Price); 

    printf("Product-2 (ID:%d)\n", P2Product_id);
    printf("  Taxed: %c\n", P2taxed); 
    printf("  Price: $%.4lf\n\n", P2Product_Price); 

    printf("Product-3 (ID:%d)\n", P3Product_id);
    printf("  Taxed: %c\n", P3taxed); 
    printf("  Price: $%.4lf\n\n", P3Product_Price); 

    printf("The average of all prices is: $%.4lf\n\n", average); 
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n"); 
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n"); 

    printf("Some Data Analysis...\n");
    printf("=====================\n");

    int tax1 = (P1taxed == 'Y'); 
    printf("1. Is product 1 taxable? -> %d\n\n", tax1);

    int tax2 = (P2taxed == 'N' && P3taxed == 'N'); 
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", tax2);

    int tax3 = (P3Product_Price < testValue); 
    printf("3. Is product 3 less than testValue ($330.99)? -> %d\n\n", tax3);

    int tax4 = (P3Product_Price > (P1Product_Price + P2Product_Price)); 
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", tax4);

    int tax5 = (P1Product_Price >= (P3Product_Price - P2Product_Price)); 
    printf("5. Is the price of product 1 equal to or more than the price difference\n");
    printf("   of product 3 LESS product 2? ->  %d (price difference: $%.2lf)\n\n", tax5, P3Product_Price - P2Product_Price);   
   
    int tax6 = (P2Product_Price >= average); 
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", tax6);

    int tax7 = (P1Product_id == P2Product_id && P1Product_id == P3Product_id);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", tax7);

    int tax8 = (P2Product_id != P1Product_id && P2Product_id != P3Product_id); 
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", tax8);

    int tax9 = (P3Product_id != P1Product_id && P3Product_id != P2Product_id); 
    printf("9. Based on product ID, product 3 is unique -> %d\n", tax9);

    return 0;
}