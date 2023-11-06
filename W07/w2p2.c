/*/////////////////////////////////////////////////////////////////////////
                          Workshop - #7 (P2)
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

#define MAXIMUM_PATH_LENGTH 70
#define MINIMUM_PATH_LENGTH 10
#define MAXIMUM_LIVES 10
#define MINIMUM_LIVES 1
#define MULTIPLE 5

#include <stdio.h>

struct playerInfo {
            int LIVES;
            char P_Character;
            int T_Count;
            int Position_HISTORY[MAXIMUM_PATH_LENGTH];
};

struct gameInfo {
            int MOVES;
            int PATHlength;
            int BOMBLocations[MAXIMUM_PATH_LENGTH];
            int TreasureLocations[MAXIMUM_PATH_LENGTH];
};

int main(void)
{
            int i, j, k;
            int MovesRemain, LivesRemain, MOVEPosition = MAXIMUM_PATH_LENGTH + 1;
            struct playerInfo Player;
            struct gameInfo Game;

        printf("================================\n");
        printf("         Treasure Hunt!\n");
        printf("================================\n");
        printf("\n");
    
    
    
        printf("PLAYER Configuration\n");
        printf("--------------------\n");
        printf("Enter a single character to represent the player: ");
        scanf(" %c", &Player.P_Character);




    do {
        printf("Set the number of lives: ");
        scanf("%d", &Player.LIVES);

        if (Player.LIVES < MINIMUM_LIVES || Player.LIVES > MAXIMUM_LIVES)
        {
            printf("     Must be between 1 and 10!\n");
        }
    } while (Player.LIVES < MINIMUM_LIVES || Player.LIVES > MAXIMUM_LIVES);



        printf("Player configuration set-up is complete\n");
        printf("\n");
        printf("GAME Configuration\n");
        printf("------------------\n");



    
    
    do {
        printf("Set the path length (a multiple of 5 between 10-70): ");
        scanf("%d", &Game.PATHlength);

        if ((Game.PATHlength < MINIMUM_PATH_LENGTH || Game.PATHlength > MAXIMUM_PATH_LENGTH) || (Game.PATHlength % MULTIPLE != 0))
        {
            printf("     Must be a multiple of 5 and between 10-70!!!\n");
        }
    } while ((Game.PATHlength < MINIMUM_PATH_LENGTH || Game.PATHlength > MAXIMUM_PATH_LENGTH) || (Game.PATHlength % MULTIPLE != 0));



   
    
    do {
        printf("Set the limit for number of moves allowed: ");
        scanf("%d", &Game.MOVES);

        if (Game.MOVES < Player.LIVES || Game.MOVES >(int) (0.75 * Game.PATHlength))
        {
            printf("    Value must be between %d and %d\n", Player.LIVES, (int)(0.75 * Game.PATHlength));
        }
    } while (Game.MOVES < Player.LIVES || Game.MOVES >(int) (0.75 * Game.PATHlength));


        printf("\n");
        printf("BOMB Placement\n");
        printf("--------------\n");
        printf("Enter the bomb positions in sets of 5 where a value\n");
        printf("of 1=BOMB, and 0=NO BOMB. Space-delimit your input.\n");
        printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game.PATHlength);



        for (i = 0; i < Game.PATHlength; i += 5)
        {
            printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
            scanf("%d %d %d %d %d", &Game.BOMBLocations[i], &Game.BOMBLocations[i + 1], &Game.BOMBLocations[i + 2], &Game.BOMBLocations[i + 3], &Game.BOMBLocations[i + 4]);
        }



        printf("BOMB placement set\n");
        printf("\n");
        printf("TREASURE Placement\n");
        printf("------------------\n");
        printf("Enter the treasure placements in sets of 5 where a value\n");
        printf("of 1=TREASURE, and 0=NO TREASURE. Space-delimit your input.\n");
        printf("(Example: 1 0 0 1 1) NOTE: there are %d to set!\n", Game.PATHlength);

        for (i = 0; i < Game.PATHlength; i += 5)
        {
            printf("   Positions [%2d-%2d]: ", i + 1, i + 5);
            scanf("%d %d %d %d %d", &Game.TreasureLocations[i], &Game.TreasureLocations[i + 1], &Game.TreasureLocations[i + 2], &Game.TreasureLocations[i + 3], &Game.TreasureLocations[i + 4]);
        }



        printf("TREASURE placement set\n");
        printf("\n");



        printf("GAME configuration set-up is complete...\n");
        printf("\n");



        printf("------------------------------------\n");
        printf("TREASURE HUNT Configuration Settings\n");
        printf("------------------------------------\n");



        printf("Player:\n");
        printf("   Symbol     : %c\n", Player.P_Character);
        printf("   Lives      : %d\n", Player.LIVES);
        printf("   Treasure   : [ready for gameplay]\n");
        printf("   History    : [ready for gameplay]\n");
        printf("\n");



        printf("Game:\n");
        printf("   Path Length: %d\n", Game.PATHlength);



        printf("   Bombs      : ");
        for (j = 0; j < Game.PATHlength; j++)
        {
            printf("%d", Game.BOMBLocations[j]);
        }
        printf("\n");



        printf("   Treasure   : ");
        for (k = 0; k < Game.PATHlength; k++)
        {
            printf("%d", Game.TreasureLocations[k]);
        }
        printf("\n\n");



        printf("====================================\n");
        printf("~ Get ready to play TREASURE HUNT! ~\n");
        printf("====================================\n");

            MovesRemain = Game.MOVES;
            LivesRemain = Player.LIVES;
            Player.T_Count = 0;
            int vCount = 0;
            char currentPosition[MAXIMUM_PATH_LENGTH];
            char positionItem[MAXIMUM_PATH_LENGTH];





        for (j = 0; j < Game.PATHlength; j++)
        {
            Player.Position_HISTORY[j] = 0;
        }

        for (k = 0; k < Game.PATHlength; k++)
        {
            positionItem[k] = '-';
        }

        for (k = 0; k < Game.PATHlength; k++)
        {
            currentPosition[k] = ' ';
        }
    
    do {
        for (k = 0; k < Game.PATHlength; k++)
        {
            if (currentPosition[k] == 'V')
            {
                vCount++;
            }
        }
        if (vCount == 0)
        {
            printf("\n");
        }
        else
        {
            printf("  ");
            for (k = 0; k < Game.PATHlength; k++)
            {
                if (currentPosition[k] == 'V')
                {
                    printf("%c\n", currentPosition[k]);
                    break;
                }
                else
                {
                    printf("%c", currentPosition[k]);
                }
            }
        }

        
        for (k = 0; k < Game.PATHlength; k++)
        {
            currentPosition[k] = ' ';
        }
        printf("  ");
        
        for (k = 0; k < Game.PATHlength; k++)
        {
            printf("%c", positionItem[k]);
        }
        printf("\n");

        printf("  ");
        for (i = 1; i <= Game.PATHlength; i++)
        {
            if (i % 10 == 0)
            {
                printf("%d", (int)i / 10);
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");
        printf("  ");
        for (i = 0; i < Game.PATHlength; i += 10)
        {
            printf("1234567890");
        }
        printf("\n");
        printf("+---------------------------------------------------+\n");
        printf("  Lives: %2d  | Treasures: %2d  |  Moves Remaining: %2d\n", LivesRemain, Player.T_Count, MovesRemain);
        printf("+---------------------------------------------------+\n");
        
        
        
            if (LivesRemain == 0)
            {
                break;
            }
            if (MovesRemain == 0)
            {
                break;
            }

        
        do {
            printf("Next Move [1-20]: ");
            scanf("%d", &MOVEPosition);

            if (MOVEPosition < 1 || MOVEPosition > Game.PATHlength)
            {
                printf("  Out of Range!!!\n");
            }
        } while (MOVEPosition < 1 || MOVEPosition > Game.PATHlength);
        printf("\n");

        if (Player.Position_HISTORY[MOVEPosition - 1] == 1)
        {
            printf("===============> Dope! You've been here before!\n\n");
            currentPosition[MOVEPosition - 1] = 'V';
            MovesRemain++;
        }
        else if (Game.BOMBLocations[MOVEPosition - 1] == 1 && Game.TreasureLocations[MOVEPosition - 1] == 1)
        {
            printf("===============> [&] !!! BOOOOOM !!! [&]\n");
            printf("===============> [&] $$$ Life Insurance Payout!!! [&]\n\n");
            positionItem[MOVEPosition - 1] = '&';
            currentPosition[MOVEPosition - 1] = 'V';
            LivesRemain--;
            Player.T_Count++;
        }
        else if (Game.BOMBLocations[MOVEPosition - 1] == 1)
        {
            printf("===============> [!] !!! BOOOOOM !!! [!]\n\n");
            positionItem[MOVEPosition - 1] = '!';
            currentPosition[MOVEPosition - 1] = 'V';
            LivesRemain--;
        }
        else if (Game.TreasureLocations[MOVEPosition - 1] == 1)
        {
            printf("===============> [$] $$$ Found Treasure! $$$ [$]\n\n");
            positionItem[MOVEPosition - 1] = '$';
            currentPosition[MOVEPosition - 1] = 'V';
            Player.T_Count++;
        }
        else
        {
            printf("===============> [.] ...Nothing found here... [.]\n\n");
            positionItem[MOVEPosition - 1] = '.';
            currentPosition[MOVEPosition - 1] = 'V';
        }
        Player.Position_HISTORY[MOVEPosition - 1] = 1;
        MovesRemain--;
        if (LivesRemain == 0)
        {
            printf("No more LIVES remaining!\n\n");
        }
        if (MovesRemain == 0)
        {
            printf("No more MOVES remaining!\n\n");
        }
    } while (MovesRemain >= 0 && LivesRemain >= 0);




        printf("\n");
        printf("##################\n");
        printf("#   Game over!   #\n");
        printf("##################\n");




        printf("\n");
        printf("You should play again and try to beat your score!\n");
        printf("\n");

    
    return 0;
}