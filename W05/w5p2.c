/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #5 (P2)
Full Name  :Aditya Mahesh Tambe
Student ID#:171969223
Email      :amtambe@myseneca.ca
Section    :ZHH

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MIN_YEAR 2012
#define MAX_YEAR 2022
#define LOG_DAYS 3

int main()

{
    
            const int Jan = 1;
            const int Dec = 12;
            int Year, Month, Day;
            double morning_rating, evening_rating, All_morning_ratings = 0.0, All_evening_ratings = 0.0, All_Sum_combined = 0.0;

                    printf("General Well-being Log\n======================\n");

        do
        {
                    printf("Set the year and month for the well-being log (YYYY MM): ");
                    scanf("%d %d", &Year, &Month);

            if (Year < MIN_YEAR || Year > MAX_YEAR)
            {
                    printf("   ERROR: The year must be between 2012 and 2022 inclusive\n");
            }
            if (Month < 1 || Month > 12)
            {
                    printf("   ERROR: Jan.(1) - Dec.(12)\n");
            }
        } while (Year < MIN_YEAR || Year > MAX_YEAR || Month < Jan || Month > Dec);

                    printf("\n*** Log date set! ***\n\n");

        for (Day = 1; Day <= LOG_DAYS; Day++)
        {

            if (Year >= MIN_YEAR && Year <= MAX_YEAR && Month >= 1 && Month <= 12)
            {

                if (Month == 1)
                {
                    printf("%d-JAN-0%d\n", Year, Day);
                }

                if (Month == 2)
                {
                    printf("%d-FEB-0%d\n", Year, Day);
                }
            }


            do
            {
                    printf("   Morning rating (0.0-5.0): ");
                    scanf("%lf", &morning_rating);

                if (morning_rating < 0.0 || morning_rating > 5.0)
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                }
            
                else
                {
                All_morning_ratings = All_morning_ratings + morning_rating;
                }
            } while (morning_rating < 0.0 || morning_rating > 5.0);

            do
            {
                    printf("   Evening rating (0.0-5.0): ");
                    scanf("%lf", &evening_rating);

                if (evening_rating < 0.0 || evening_rating > 5.0)
                {
                    printf("      ERROR: Rating must be between 0.0 and 5.0 inclusive!\n");
                }

                else
                {
                All_evening_ratings = All_evening_ratings + evening_rating;
                }

            } while (evening_rating < 0.0 || evening_rating > 5.0);

                    printf("\n");
        }

                        All_Sum_combined = All_morning_ratings + All_evening_ratings;

                    printf("Summary\n=======\n");
                    printf("Morning total rating: %.3lf", All_morning_ratings);
                    printf("\nEvening total rating:  %.3lf", All_evening_ratings);
                    printf("\n----------------------------\n");
                    printf("Overall total rating: %.3lf", All_Sum_combined);
                    printf("\n\nAverage morning rating:  %.1lf", (All_morning_ratings / 3));
                    printf("\nAverage evening rating:  %.1lf", (All_evening_ratings / 3));
                    printf("\n----------------------------\n");
                    printf("Average overall rating:  %.1lf\n", (All_Sum_combined / 6));

        return 0;
}