/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P1)
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

#define MAX_PATH_LENGTH 70
#define MIN_PATH_LENGTH 10
#define MAX_LIVES 10
#define MULTIPLE 5

struct PlayerInfo
{
        char Symbol;
        int Lives, Treasurecount;
        int Position[MAX_PATH_LENGTH];
};

struct GameInfo
{
        int Moves, Path_Length;
        int bomb[MAX_PATH_LENGTH], treasure[MAX_PATH_LENGTH];
};

#include <stdio.h>
int main()
{
        int i, j;
        int done; 
    
        struct PlayerInfo player1 = { 0, 0, 0, {0} };
        struct GameInfo game = { 0, 0, {0}, {0} };

            printf("================================\n");
            printf("         Treasure Hunt!\n");
            printf("================================\n\n");

            printf("PLAYER Configuration\n");
            printf("--------------------\n");
            printf("Enter a single character to represent the player: ");
            scanf(" %c", &player1.Symbol);

    do
    {
        done = 0;
            printf("Set the number of lives: ");
            scanf("%d", &player1.Lives);

            if (player1.Lives < 1 || player1.Lives > MAX_LIVES)
            {
                printf("     Must be between 1 and %d!\n", MAX_LIVES);
                done = 1;
            }
        
    } while (done);
    
            printf("Player configuration set-up is complete\n\n");
            printf("GAME Configuration\n");
            printf("------------------\n");

    do
    {
        done = 0;
            printf("Set the path length (a multiple of %d between %d-%d): ", MULTIPLE, MIN_PATH_LENGTH, MAX_PATH_LENGTH);
            scanf("%d", &game.Path_Length);

            if (game.Path_Length < MIN_PATH_LENGTH || game.Path_Length > MAX_PATH_LENGTH || game.Path_Length % MULTIPLE != 0)
            {
                printf("     Must be a multiple of %d and between %d-%d!!!\n", MULTIPLE, MIN_PATH_LENGTH, MAX_PATH_LENGTH);
                done = 1;
            }

    } while (done);
    
    do
    {
        done = 0;
            printf("Set the limit for number of moves allowed: ");
            scanf("%d", &game.Moves);

            if (game.Moves < player1.Lives || game.Moves >(int)(game.Path_Length * 0.75))
            {
                printf("     Value must be between %d and %d\n", player1.Lives, (int)(game.Path_Length * 0.75));
                done = 1;
            }

    } while (done);

            printf("\n");

            printf("BOMB Placement\n");
            printf("--------------\n");
            printf("Enter the bomb positions in sets of %d where a value\n", MULTIPLE);
            printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
            printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.Path_Length);
        for (i = 0; i < game.Path_Length; i += MULTIPLE)
        {
        printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
        for (j = 0; j < MULTIPLE; j++)
        {
            scanf("%d", &game.bomb[i+j]);
        }
        
        }

            printf("BOMB placement set\n\n");
            printf("TREASURE Placement\n");
            printf("------------------\n");
            printf("Enter the treasure placements in sets of 5 where a value\n");
            printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
            printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", game.Path_Length);
        for (i = 0; i < game.Path_Length; i += MULTIPLE)
        {
            printf("   Positions [%2d-%2d]: ", i + 1, i + MULTIPLE);
                for (j = 0; j < MULTIPLE; j++)
                {
                    scanf("%d", &game.treasure[i + j]);
                }
        }

            printf("TREASURE placement set\n\n");
            printf("GAME configuration set-up is complete...\n\n");

            printf("------------------------------------\n");
            printf("TREASURE HUNT Configuration Settings\n");
            printf("------------------------------------\n");
            printf("Player:\n");
            printf("   Symbol     : %c\n", player1.Symbol);
            printf("   Lives      : %d\n", player1.Lives);
            printf("   Treasure   : [ready for gameplay]\n");
            printf("   History    : [ready for gameplay]\n\n");

            printf("Game:\n");
            printf("   Path Length: %d\n", game.Path_Length);
    
            printf("   Bombs      : ");
        for (i = 0; i < game.Path_Length; i++)
        {
            printf("%d", game.bomb[i]);
        }
            printf("\n");

            printf("   Treasure   : ");

        for (i = 0; i < game.Path_Length; i++)
        {
            printf("%d", game.treasure[i]);
        }
            printf("\n\n");

            printf("====================================\n");
            printf("~ Get ready to play TREASURE HUNT! ~\n");
            printf("====================================\n");
    return 0;
}