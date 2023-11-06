/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #4 (P1)
Full Name  : Aditya Mahesh Tambe
Student ID#: 171969223
Email      : amtambe@myseneca.ca
Section    : ZHH

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
/////////////////////////////////////////////////////////////////////////*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    int iteration_num, i;
    char Type_Of_Loop;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n");
    printf("\n");

    do 
    {


        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &Type_Of_Loop, &iteration_num);


        if (Type_Of_Loop == 'D' || Type_Of_Loop == 'W' || Type_Of_Loop == 'F') {
            if (iteration_num >= 3 && iteration_num <= 20) {
                i = 0;


                if (Type_Of_Loop == 'D') {
                    printf("DO-WHILE: ");
                }
                else if (Type_Of_Loop == 'W') {
                    printf("WHILE   : ");
                }
                else {
                    printf("FOR     : ");
                }

                while (i < iteration_num) {
                    if (Type_Of_Loop == 'D') {
                        printf("D");
                    }
                    else if (Type_Of_Loop == 'W') {
                        printf("W");
                    }
                    else {
                        printf("F");
                    }
                    i++;
                }

                printf("\n\n");
            }

            else
            {
                printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
            }
        }

        else if (Type_Of_Loop == 'Q')
        {
            if (iteration_num == 0) {
                printf("\n");
                printf("+--------------------+\n");
                printf("Loop application ENDED\n");
                printf("+--------------------+\n");
            }

            else
            {
                printf("ERROR: To quit, the number of iterations should be 0!\n\n");
            }
        }

        else
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
    } 

    while (iteration_num != 0 || Type_Of_Loop != 'Q');

    return 0;
}
