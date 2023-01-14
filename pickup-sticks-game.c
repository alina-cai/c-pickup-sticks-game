#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {

    // declare variables
    int numSticks = 0;
    int botNum = 0;
    int botNum2 = 0;
    int playerNum = 0;
    int playerNum2 = 0;
    int players = 0;
    char algorithm;
    char playerType;
    char bot1;
    char bot2;
    char playAgain[5] = "yes";

    // seed random number generator
    srand(time(0));

    while (strcmp(playAgain, "yes") == 0) {

        // clear screen
        printf("\033[0;0H\033[2J");

        // randomize number of sticks
        numSticks = rand() % 11 + 10;

        // title
        printf("Welcome to the pick-up sticks game!\n\n");

        // option for multiple players
        printf("How many players (1/2)? ");
        scanf(" %d", &players);

        // option for improved computer algorithm
        if (players == 1) {
            printf("Improved computer algorithm (y/n)? ");
            scanf(" %c", &algorithm);
        }

        // option for human or bot players
        if (players == 2) {
            printf("Human or bot players (h/b)? ");
            scanf(" %c", &playerType);
            if (playerType == 'b') {
                printf("Improved computer algorithm for Bot 1 (y/n)? ");
                scanf(" %c", &bot1);
                printf("Improved computer algorithm for Bot 2 (y/n)? ");
                scanf(" %c", &bot2);
            }
        }

        switch (players) {

            case 1: {

            switch (algorithm) {
                
                case 'y':

                printf("\n");
                
                // visualize number of sticks
                for (int i = 1; i <= numSticks; i++)
                    printf("|");

                printf("\nThere are %d sticks available.\n", numSticks);

                while(numSticks > 0) {

                    // user input
                    printf("\nHow many sticks do you want to pick up? ");
                    scanf("%d", &playerNum);

                    if (numSticks - playerNum == 0) {
                        printf("\nYou win!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                    }

                    // deny invalid input
                    switch (playerNum) {

                    case 1: numSticks = numSticks - playerNum;
                            break;
                    case 2: numSticks = numSticks - playerNum;
                            break;
                    case 3: numSticks = numSticks - playerNum;
                            break;
                    default: printf("Invalid number of sticks.\n");

                    }
                    
                    if (numSticks > 10) {
                        botNum = rand() % 3 + 1;
                        printf("Computer picked up %d stick(s).\n", botNum);
                    }
                    else if (numSticks == 9 or numSticks == 7 or numSticks == 3) {
                        botNum = 3;
                        printf("Computer picked up %d stick(s).\n", botNum);
                        printf("Computer says: Good luck winning :D\n");
                    }
                    else if (numSticks == 10 or numSticks == 6 or numSticks == 2) {
                        botNum = 2;
                        printf("Computer picked up %d stick(s).\n", botNum);
                        printf("Computer says: Good luck winning :D\n");
                    } 
                    else if (numSticks == 8 or numSticks == 5 or numSticks == 1) {
                        botNum = 1;
                        printf("Computer picked up %d stick(s).\n", botNum);
                        printf("Computer says: Good luck winning :D\n");
                    }
                    else if (numSticks == 4) {
                        botNum = 1;
                        printf("Computer picked up %d stick(s).\n", botNum);
                    }
                    else if (numSticks == 0) {
                        break;
                    }

                    if (numSticks - botNum == 0) {
                        printf("\nYou lose!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                    }

                    // process computer move
                    numSticks = numSticks - botNum;
                    if (numSticks >= 0) {
                        printf("%d stick(s) remaining.\n", numSticks);
                    }

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++) {
                        printf("|");
                    }
                    printf("\n");
                }

                break;

            }

                case 'n':

                // visualize number of sticks
                for (int i = 1; i <= numSticks; i++)
                    printf("|");

                printf("\nThere are %d sticks available.\n", numSticks);

                while(numSticks > 0) {

                    // user input
                    printf("\nHow many sticks do you want to pick up? ");
                    scanf("%d", &playerNum);

                    if (numSticks - playerNum == 0) {
                        printf("\nYou win!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                    }

                    // deny invalid input
                    switch (playerNum) {

                    case 1: numSticks = numSticks - playerNum;
                            break;
                    case 2: numSticks = numSticks - playerNum;
                            break;
                    case 3: numSticks = numSticks - playerNum;
                            break;
                    default: printf("Invalid number of sticks.\n");

                    }
                    
                    if (numSticks == 2) {
                        botNum = rand() % 2 + 1;
                        printf("Computer picked up %d stick(s).\n", botNum);
                    } 
                    else if (numSticks == 1) {
                        printf("Computer picked up 1 stick(s).\n");
                    }
                    else if (numSticks == 0) {
                        break;
                    }
                    else {
                    botNum = rand() % 3 + 1;
                    printf("Computer picked up %d stick(s).\n", botNum);
                    }

                    if (numSticks - botNum == 0) {
                        printf("\nYou lose!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                    }

                    // process computer move
                    numSticks = numSticks - botNum;
                    if (numSticks >= 0) {
                        printf("%d stick(s) remaining.\n", numSticks);
                    }

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++) {
                        printf("|");
                    }
                    printf("\n");
                }
        
            }

            case 2:

            switch (playerType) {

                case 'h':
                
                printf("\n");
                
                // visualize number of sticks
                for (int i = 1; i <= numSticks; i++)
                    printf("|");

                printf("\nThere are %d sticks available.\n", numSticks);

                while(numSticks > 0) {

                    // user input
                    printf("\nHow many sticks does Player 1 want to pick up? ");
                    scanf("%d", &playerNum);

                    if (numSticks - playerNum == 0) {
                        printf("\nPlayer 1 wins!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                        else {
                            break;
                        }
                    }

                    // deny invalid input
                    switch (playerNum) {

                    case 1: numSticks = numSticks - playerNum;
                            break;
                    case 2: numSticks = numSticks - playerNum;
                            break;
                    case 3: numSticks = numSticks - playerNum;
                            break;
                    default: printf("Invalid number of sticks.\n");

                    }
                    
                    // user input
                    printf("How many sticks does Player 2 want to pick up? ");
                    scanf("%d", &playerNum2);

                    if (numSticks - playerNum2 == 0) {
                        printf("\nPlayer 2 wins!\n");
                        printf("\nDo you want to play again (yes/no)? ");
                        scanf("%s", playAgain);
                        if (strcmp(playAgain, "no") == 0)
                            return 0;
                    }

                    // deny invalid input
                    switch (playerNum2) {

                    case 1: numSticks = numSticks - playerNum2;
                            break;
                    case 2: numSticks = numSticks - playerNum2;
                            break;
                    case 3: numSticks = numSticks - playerNum2;
                            break;
                    default: printf("Invalid number of sticks.\n");

                    }

                    // display remaining sticks
                    if (numSticks >= 0) {
                        printf("%d stick(s) remaining.\n", numSticks);
                    }

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++) {
                        printf("|");
                    }
                    printf("\n");
            
                }

                case 'b':

                if (bot1 == 'y' and bot2 == 'y') {
                printf("\n");

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++)
                        printf("|");

                    printf("\nThere are %d sticks available.\n", numSticks);

                    while(numSticks > 0) {

                        // compute Bot 1 move
                        if (numSticks > 10) {
                            botNum = rand() % 3 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 9 or numSticks == 7 or numSticks == 3) {
                            botNum = 3;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 10 or numSticks == 6 or numSticks == 2) {
                            botNum = 2;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        } 
                        else if (numSticks == 8 or numSticks == 5 or numSticks == 1) {
                            botNum = 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 4) {
                            botNum = 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 0) {
                            break;
                        }

                        if (numSticks - botNum == 0) {
                            printf("\nBot 1 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }
                        
                        // process Bot 1 move
                        numSticks = numSticks - botNum;

                        // compute Bot 2 move
                        if (numSticks > 10) {
                            botNum2 = rand() % 3 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 9 or numSticks == 7 or numSticks == 3) {
                            botNum2 = 3;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 10 or numSticks == 6 or numSticks == 2) {
                            botNum2 = 2;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        } 
                        else if (numSticks == 8 or numSticks == 5 or numSticks == 1) {
                            botNum2 = 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 4) {
                            botNum2 = 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 0) {
                            break;
                        }
                        
                        if (numSticks >= 0) {
                            printf("%d stick(s) remaining.\n", numSticks);
                        }
                        
                        if (numSticks - botNum2 == 0) {
                            printf("\nBot 2 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 2 move
                        numSticks = numSticks - botNum2;

                        printf("\n");

                    }

                }

                else if (bot1 == 'y' and bot2 == 'n') {

                    printf("\n");

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++)
                        printf("|");

                    printf("\nThere are %d sticks available.\n", numSticks);

                    while(numSticks > 0) {
                        
                        // compute Bot 1 move
                        if (numSticks > 10) {
                            botNum = rand() % 3 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 9 or numSticks == 7 or numSticks == 3) {
                            botNum = 3;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 10 or numSticks == 6 or numSticks == 2) {
                            botNum = 2;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        } 
                        else if (numSticks == 8 or numSticks == 5 or numSticks == 1) {
                            botNum = 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 4) {
                            botNum = 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }
                        else if (numSticks == 0) {
                            break;
                        }

                        if (numSticks - botNum == 0) {
                            printf("\nBot 1 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 1 move
                        numSticks = numSticks - botNum;

                        // compute Bot 2 move
                        if (numSticks == 2) {
                            botNum2 = rand() % 2 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        } 
                        else if (numSticks == 1) {
                            botNum2 = 1;
                            printf("Bot 2 picked up 1 stick(s).\n");
                        }
                        else if (numSticks == 0) {
                            break;
                        }
                        else {
                            botNum2 = rand() % 3 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }

                        if (numSticks >= 0) {
                            printf("%d stick(s) remaining.\n", numSticks);
                        }

                        if (numSticks - botNum2 == 0) {
                            printf("\nBot 2 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 2 move
                        numSticks = numSticks - botNum2;

                        printf("\n");

                    }

                }

                else if (bot1 == 'n' and bot2 == 'y') {

                    printf("\n");

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++)
                        printf("|");

                    printf("\nThere are %d sticks available.\n", numSticks);

                    while(numSticks > 0) {

                        // compute Bot 1 move
                        if (numSticks == 2) {
                            botNum = rand() % 2 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        } 
                        else if (numSticks == 1) {
                            botNum = 1;
                            printf("\nBot 1 picked up 1 stick(s).\n");
                        }
                        else if (numSticks == 0) {
                            break;
                        }
                        else {
                            botNum = rand() % 3 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }

                        if (numSticks - botNum == 0) {
                            printf("\nBot 1 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 1 move
                        numSticks = numSticks - botNum;

                        // compute Bot 2 move
                        if (numSticks > 10) {
                            botNum2 = rand() % 3 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 9 or numSticks == 7 or numSticks == 3) {
                            botNum2 = 3;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 10 or numSticks == 6 or numSticks == 2) {
                            botNum2 = 2;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        } 
                        else if (numSticks == 8 or numSticks == 5 or numSticks == 1) {
                            botNum2 = 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 4) {
                            botNum2 = 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }
                        else if (numSticks == 0) {
                            break;
                        }

                        if (numSticks >= 0) {
                            printf("%d stick(s) remaining.\n", numSticks);
                        }

                        if (numSticks - botNum2 == 0) {
                            printf("\nBot 2 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 2 move
                        numSticks = numSticks - botNum2;

                        printf("\n");

                    }

                }

                else if (bot1 == 'n' and bot2 == 'n') {

                    printf("\n");

                    // visualize number of sticks
                    for (int i = 1; i <= numSticks; i++)
                        printf("|");

                    printf("\nThere are %d sticks available.\n", numSticks);

                    while(numSticks > 0) {

                        // compute Bot 1 move
                        if (numSticks == 2) {
                            botNum = rand() % 2 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        } 
                        else if (numSticks == 1) {
                            botNum = 1;
                            printf("\nBot 1 picked up 1 stick(s).\n");
                        }
                        else if (numSticks == 0) {
                            break;
                        }
                        else {
                            botNum = rand() % 3 + 1;
                            printf("\nBot 1 picked up %d stick(s).\n", botNum);
                        }

                        if (numSticks - botNum == 0) {
                            printf("\nBot 1 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 1 move
                        numSticks = numSticks - botNum;

                        // compute Bot 2 move
                        if (numSticks == 2) {
                            botNum2 = rand() % 2 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        } 
                        else if (numSticks == 1) {
                            botNum2 = 1;
                            printf("Bot 2 picked up 1 stick(s).\n");
                        }
                        else if (numSticks == 0) {
                            break;
                        }
                        else {
                            botNum2 = rand() % 3 + 1;
                            printf("Bot 2 picked up %d stick(s).\n", botNum2);
                        }

                        if (numSticks >= 0) {
                            printf("%d stick(s) remaining.\n", numSticks);
                        }

                        if (numSticks - botNum2 == 0) {
                            printf("\nBot 2 wins!\n");
                            printf("\nDo you want to play again (yes/no)? ");
                            scanf("%s", playAgain);
                            if (strcmp(playAgain, "no") == 0)
                                return 0;
                        }

                        // process Bot 2 move
                        numSticks = numSticks - botNum2;

                        printf("\n");

                    }

                }

            }

        }

    }

}