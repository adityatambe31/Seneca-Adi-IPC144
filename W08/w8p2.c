/*/////////////////////////////////////////////////////////////////////////
						  Workshop - #8 (P2)
Full Name  :Abhijeet Singh
Student ID#:144374220
Email      :asingh1289@myseneca.ca
Section    :ZEE

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/
#define _CRT_SECURE_NO_WARNINGS
// System Libraries
#include<stdio.h>
// User-Defined Libraries
#include "w8p2.h"

// ----------------------------------------------------------------------------
// PART-1

// 1. Get user input of int type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
int getIntPositive(int* int_ptr) {
	int input;
	int flag = 1;

	do {
		scanf("%d", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (int_ptr != NULL)
	{
		*int_ptr = input;
	}
	return input;
}

// 2. Get user input of double type and validate for a positive non-zero number
//    (return the number while also assigning it to the pointer argument)
double getDoublePositive(double* double_ptr) {
	double input;
	int flag = 1;

	do {
		scanf("%lf", &input);
		if (input <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} while (flag);

	if (double_ptr != NULL)
	{
		*double_ptr = input;
	}
	return input;
}

// 3. Opening Message (include the number of products that need entering)
void openingMessage(const int seq_number)
{

			printf("Cat Food Cost Analysis\n");
			printf("======================\n");
			printf("\n");

			printf("Enter the details for %d dry food bags of product data for analysis.\n", MAX_PRODUCTS);
			printf("NOTE: A 'serving' is %dg\n", GRAMS_NUMBER);
			printf("\n");
}

// 4. Get user input for the details of cat food product
struct CatFoodInfo getCatFoodInfo(const int seq_number)
{
		struct CatFoodInfo CatFoodIn;
		int flag;
			printf("Cat Food Product #%d\n", seq_number + 1);
			printf("--------------------\n");
		flag = 1;

	// SKU
			printf("SKU           : ");
		flag = 1;
	do 
	{
			scanf("%d", &CatFoodIn.sku_Number);
		if (CatFoodIn.sku_Number <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 
	while (flag);

	// Price
			printf("PRICE         : $");
		flag = 1;
	do 
	{
			scanf("%lf", &CatFoodIn.prod_Price);
		if (CatFoodIn.prod_Price <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	}
	while (flag);

	// Weight
			printf("WEIGHT (LBS)  : ");
		flag = 1;
	do 
	{
			scanf("%lf", &CatFoodIn.prod_Weight);
		if (CatFoodIn.prod_Weight <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	}
	while (flag);

	// Calories
			printf("CALORIES/SERV.: ");
		flag = 1;
	do 
	{
			scanf("%d", &CatFoodIn.calories);
		if (CatFoodIn.calories <= 0)
		{
			printf("ERROR: Enter a positive value: ");
		}
		else
		{
			flag = 0;
		}
	} 
	while (flag);

			printf("\n");

	// Returning the struct
	return CatFoodIn;

}

// 5. Display the formatted table header
void displayCatFoodHeader(void)
{
			printf("SKU         $Price    Bag-lbs Cal/Serv\n");
			printf("------- ---------- ---------- --------\n");
}

// 6. Display a formatted record of cat food data
void displayCatFoodData(int sku_number, double* product_price, int calorie_per_serving, double* product_weight_lbs)
{
			printf("%07d %10.2lf %10.1lf %8d\n", sku_number, *product_price, *product_weight_lbs, calorie_per_serving);
}


// ----------------------------------------------------------------------------
// PART-2

// 8. convert lbs: kg (divide by 2.20462)
double convertLbsKg(const double* pounds, double* conversionResultToKg)
{
		double poundsToKg;
			poundsToKg = *pounds / POUNDS_TO_KG;
	if (conversionResultToKg != NULL)
	{
			*conversionResultToKg = poundsToKg;
	}
		return poundsToKg;
}

// 9. convert lbs: g (call convertKG, then * 1000)
int convertLbsG(const double* pounds, int* conversionResultToG)
{
		int poundsToG;
		poundsToG = ((*pounds) / POUNDS_TO_KG) * 1000;
	if (conversionResultToG != NULL)
	{
			*conversionResultToG = poundsToG;
	}
	return poundsToG;
}

// 10. convert lbs: kg and g
void convertLbs(const double* pounds, double* conversionResultToKg, int* conversionResultToG)
{
		double poundsToKg = (*pounds) / POUNDS_TO_KG;
		int poundsToG = ((*pounds) / POUNDS_TO_KG) * 1000;

	if (conversionResultToG != NULL && conversionResultToKg != NULL)
	{
			*conversionResultToG = poundsToG;
			*conversionResultToKg = poundsToKg;
	}
}

// 11. calculate: servings based on gPerServ
double calculateServings(const int servingSizeGrams, const int totalGrams, double* numberOfServings)
{
		double servings = ((double)totalGrams) / servingSizeGrams;

	if (numberOfServings != NULL)
	{
			*numberOfServings = servings;
	}

	return servings;
}

// 12. calculate: cost per serving
double calculateCostPerServing(const double* price, const double* numberOfServings, double* result)
{
		double costPerServing = (*price) / (*numberOfServings);

	if (result != NULL)
	{
			*result = costPerServing;
	}

	return costPerServing;

}

// 13. calculate: cost per calorie
double calculateCostPerCal(const double* price, const double* totalCalories, double* result)
{
		double costPerCal = (*price) / (*totalCalories);

	if (result != NULL)
	{
			*result = costPerCal;
	}

	return costPerCal;
}

// 14. Derive a reporting detail record based on the cat food product data
struct ReportData calculateReportData(struct CatFoodInfo CatFoodIn)
{
	struct ReportData rd;

	// Assigning Values
			rd.skuNo = CatFoodIn.sku_Number;
			rd.prodPrice = CatFoodIn.prod_Price;
			rd.prodWeight = CatFoodIn.prod_Weight;
			rd.calories = CatFoodIn.calories;

	// Assigning calculated values
			rd.prodWgtInKgs = convertLbsKg(&rd.prodWeight, &rd.prodWgtInKgs);
			rd.prodWgtInGms = convertLbsG(&rd.prodWeight, &rd.prodWgtInGms);
			rd.totalServing = calculateServings(GRAMS_NUMBER, rd.prodWgtInGms, &rd.totalServing);

	// Total calories
		double totalCalories = rd.calories * rd.totalServing;

			rd.costPerServing = calculateCostPerServing(&rd.prodPrice, &rd.totalServing, &rd.costPerServing);
			rd.costOfCal = calculateCostPerCal(&rd.prodPrice, &totalCalories, &rd.costOfCal);


	// Returning the struct
	return rd;
}

// 15. Display the formatted table header for the analysis results
void displayReportHeader(void)
{
			printf("Analysis Report (Note: Serving = %dg)\n", GRAMS_NUMBER);
			printf("---------------\n");
			printf("SKU         $Price    Bag-lbs     Bag-kg     Bag-g Cal/Serv Servings  $/Serv   $/Cal\n");
			printf("------- ---------- ---------- ---------- --------- -------- -------- ------- -------\n");
}

// 16. Display the formatted data row in the analysis table
void displayReportData(const struct ReportData rd, const int cheapestProductCheck)
{
			printf("%07d %10.2lf %10.1lf %10.4lf %9d %8d %8.1lf %7.2lf %7.5lf", rd.skuNo, rd.prodPrice, rd.prodWeight, rd.prodWgtInKgs, rd.prodWgtInGms, rd.calories, rd.totalServing, rd.costPerServing, rd.costOfCal);
}
// 17. Display the findings (cheapest)
void displayFinalAnalysis(const struct CatFoodInfo CatFoodIn)
{
			printf("Final Analysis\n");
			printf("--------------\n");
			printf("Based on the comparison data, the PURRR-fect economical option is:\n");
			printf("SKU:%07d Price: $%5.2lf\n", CatFoodIn.sku_Number, CatFoodIn.prod_Price);
			printf("\n");
			printf("Happy shopping!\n");
			printf("\n");
}

// ----------------------------------------------------------------------------

// 7. Logic entry point
void start(void)
{
			struct ReportData rd[MAX_PRODUCTS] = { {0} };
			struct CatFoodInfo CatFoodIn[MAX_PRODUCTS] = { {0} };
			int i, cheapestIndex = 0;
			double cheapestProductPrice;
			openingMessage(MAX_PRODUCTS);

	for (i = 0; i < MAX_PRODUCTS; i++)
	{
			CatFoodIn[i] = getCatFoodInfo(i);
			rd[i] = calculateReportData(CatFoodIn[i]);
	}

		displayCatFoodHeader();

	for (i = 0; i < MAX_PRODUCTS; i++) {
			displayCatFoodData(CatFoodIn[i].sku_Number, &CatFoodIn[i].prod_Price, CatFoodIn[i].calories, &CatFoodIn[i].prod_Weight);
	}

		cheapestProductPrice = rd[0].costPerServing;
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (rd[i].costPerServing <= cheapestProductPrice)
		{
			cheapestProductPrice = rd[i].costPerServing;
			cheapestIndex = i;
		}
	}
			printf("\n");

		displayReportHeader();

	for (i = 0; i < MAX_PRODUCTS; i++)
	{
			displayReportData(rd[i], cheapestIndex);

		if (cheapestIndex == i)
		{
			printf(" ***\n");
		}
		else
		{
			printf("\n");
		}
	}
			printf("\n");
	for (i = 0; i < MAX_PRODUCTS; i++)
	{
		if (i == cheapestIndex)
		{
			displayFinalAnalysis(CatFoodIn[i]);
		}
	}
}