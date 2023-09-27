/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #3 (P2)
Full Name  : Tanisha Tanisha
Student ID#: 166456228
Email      : ttanisha2@myseneca.ca
Section    : ZGG

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char Coffee1, Coffee2, Coffee3, Coffeestrength, ServeCoffeewithCream;
	char BestServedCream1, BestServedCream2, BestServedCream3;
	int CoffeeBagWeight1, CoffeeBagWeight2, CoffeeBagWeight3, ServingNumber;
	const double GRAMS_IN_LBS = 453.5924;

	printf("Take a Break - Coffee Shop\n");
	printf("==========================\n");

	printf("\n");
	printf("Enter the coffee product information being sold today...\n");


	printf("\nCOFFEE-1...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &Coffee1);
	printf("Bag weight (g): ");
	scanf(" %d", &CoffeeBagWeight1);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &BestServedCream1);
	printf("\n");

	printf("COFFEE-2...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &Coffee2);
	printf("Bag weight (g): ");
	scanf(" %d", &CoffeeBagWeight2);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &BestServedCream2);
	printf("\n");

	printf("COFFEE-3...\n");
	printf("Type ([L]ight,[M]edium,[R]ich): ");
	scanf(" %c", &Coffee3);
	printf("Bag weight (g): ");
	scanf(" %d", &CoffeeBagWeight3);
	printf("Best served with cream ([Y]es,[N]o): ");
	scanf(" %c", &BestServedCream3);

	printf("\n");
	printf("---+------------------------+---------------+-------+\n");
	printf("   |    Coffee              |   Packaged    | Best  |\n");
	printf("   |     Type               |  Bag Weight   | Served|\n");
	printf("   +------------------------+---------------+ With  |\n");
	printf("ID | Light | Medium | Rich  |  (G) | Lbs    | Cream |\n");
	printf("---+------------------------+---------------+-------|\n");
	printf(" 1 |   %d   |   %d    |   %d   |  %d |  %.3lf |   %d   |\n", Coffee1 == 'l' || Coffee1 == 'L', Coffee1 == 'm' || Coffee1 == 'M', Coffee1 == 'r' || Coffee1 == 'R', CoffeeBagWeight1, (double)CoffeeBagWeight1 / GRAMS_IN_LBS, BestServedCream1 == 'y' || BestServedCream1 == 'Y');
	printf(" 2 |   %d   |   %d    |   %d   |  %d |  %.3lf |   %d   |\n", Coffee2 == 'l' || Coffee2 == 'L', Coffee2 == 'm' || Coffee2 == 'M', Coffee2 == 'r' || Coffee2 == 'R', CoffeeBagWeight2, (double)CoffeeBagWeight2 / GRAMS_IN_LBS, BestServedCream2 == 'y' || BestServedCream2 == 'Y');
	printf(" 3 |   %d   |   %d    |   %d   | %d |  %.3lf |   %d   |\n", Coffee3 == 'l' || Coffee3 == 'L', Coffee3 == 'm' || Coffee3 == 'M', Coffee3 == 'r' || Coffee3 == 'R', CoffeeBagWeight3, (double)CoffeeBagWeight3 / GRAMS_IN_LBS, BestServedCream3 == 'y' || BestServedCream3 == 'Y');

	printf("\n");
	printf("Enter how you like your coffee...\n");

	printf("\n");
	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf(" %c", &Coffeestrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &ServeCoffeewithCream);
	printf("Typical number of daily servings: ");
	scanf(" %d", &ServingNumber);

	printf("\n");
	printf("The below table shows how your preferences align to the available products:\n");

	printf("\n");
	printf("--------------------+-------------+-------+\n");
	printf("  |     Coffee      |  Packaged   | With  |\n");
	printf("ID|      Type       | Bag Weight  | Cream |\n");
	printf("--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n", Coffeestrength == 'l' || Coffeestrength == 'L', ServingNumber <= 4, ServeCoffeewithCream == 'y' || ServeCoffeewithCream == 'Y');
	printf(" 2|       %d         |      %d      |   %d   |\n", Coffeestrength == 'r' || Coffeestrength == 'R', ServingNumber <= 9 && ServingNumber >= 5, ServeCoffeewithCream == 'n' || ServeCoffeewithCream == 'N');
	printf(" 3|       %d         |      %d      |   %d   |\n", Coffeestrength == 'm' || Coffeestrength == 'M', ServingNumber >= 10, ServeCoffeewithCream == 'N' || ServeCoffeewithCream == 'n');

	printf("\n");
	printf("Enter how you like your coffee...\n");

	printf("\n");
	printf("Coffee strength ([L]ight, [M]edium, [R]ich): ");
	scanf(" %c", &Coffeestrength);
	printf("Do you like your coffee with cream ([Y]es,[N]o): ");
	scanf(" %c", &ServeCoffeewithCream);
	printf("Typical number of daily servings: ");
	scanf(" %d", &ServingNumber);

	printf("\n");
	printf("The below table shows how your preferences align to the available products:\n");

	printf("\n");
	printf("--------------------+-------------+-------+\n");
	printf("  |     Coffee      |  Packaged   | With  |\n");
	printf("ID|      Type       | Bag Weight  | Cream |\n");
	printf("--+-----------------+-------------+-------+\n");
	printf(" 1|       %d         |      %d      |   %d   |\n", Coffeestrength == 'l' || Coffeestrength == 'L', ServingNumber <= 4, ServeCoffeewithCream == 'y' || ServeCoffeewithCream == 'Y');
	printf(" 2|       %d         |      %d      |   %d   |\n", Coffeestrength == 'r' || Coffeestrength == 'R', ServingNumber <= 10 && ServingNumber >= 5, ServeCoffeewithCream == 'n' || ServeCoffeewithCream == 'N');
	printf(" 3|       %d         |      %d      |   %d   |\n", Coffeestrength == 'm' || Coffeestrength == 'M', ServingNumber > 10, ServeCoffeewithCream == 'N' || ServeCoffeewithCream == 'n');

	printf("\n");
	printf("Hope you found a product that suits your likes!\n");


	return 0;

}