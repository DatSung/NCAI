#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int main(void){
    int main_Num = 0, player_Num = 0, ai_Num = 0;
    int key_control = 0;

    printf("\n");

    printf("Welcome to NCAI Early Access\n");
    printf("Please choose difficult level\n");
    printf("(1) Stupid AI\n");
    printf("(2) Smart AI\n");
    printf("(3) Smart Player\n");
    printf("(4) Stupid Player\n");
    scanf("%d", &key_control);

    if (key_control == 1) {

        do {

            if (main_Num < 30) {
                printf("\n");

                printf("PLease enter your number count: ");

                do {
                    scanf("%d", &player_Num);
                } while (player_Num > 3);

                printf("Main number: %d\n", main_Num += player_Num);

                // CHECK RESULT

                if (main_Num >= 30)
                {
                    printf("YOU WIN");
                }
                

            }

            if (main_Num < 30) {

                printf("AI count: %d\n", ai_Num = rand() % 3);
                printf("Main number: %d\n", main_Num += ai_Num);

                printf("\n");

                // CHECK RESULT
                if (main_Num >= 30)
                {
                    printf("AI WIN\n");
                }

        }

    } while (main_Num < 30);


    } else if (key_control == 2) {
        do {

            if (main_Num < 30) {
                printf("\n");

                printf("PLease enter your number count: ");

                do {
                    scanf("%d", &player_Num);
                } while (player_Num > 3);

                printf("Main number: %d\n", main_Num += player_Num);

                // CHECK RESULT


                if (main_Num >= 30)
                {
                    printf("YOU WIN");
                }
                

            }

            if (main_Num < 30) {

                // AI

                if (player_Num == 1) {
                    ai_Num = 3;
                } else if (player_Num == 2)
                {                   
                    ai_Num = 2;   
                } else if (player_Num == 3)
                {
                    ai_Num = 1;
                };

                if (main_Num == 1) {
                    ai_Num = 1;
                };
                if (main_Num == 3) {
                    ai_Num = 1;
                }

                printf("AI count: %d\n", ai_Num);
                printf("Main number: %d\n", main_Num += ai_Num);

                printf("\n");

                // CHECK RESULT
                if (main_Num >= 30)
                {
                    printf("AI WIN\n");
                }
            }

        } while (main_Num < 30);

    } else if (key_control == 3) {

        do {
            if (main_Num < 30) {
                
                printf("\n");
                printf("AI count: %d\n", ai_Num = rand() % 3);
                printf("Main number: %d\n", main_Num += ai_Num);

                printf("\n");

                // CHECK RESULT
                if (main_Num >= 30)
                {
                    printf("AI WIN\n");
                }

            }

            if (main_Num < 30) {
                printf("\n");

                printf("PLease enter your number count: ");

                do {
                    scanf("%d", &player_Num);
                } while (player_Num > 3);

                printf("Main number: %d\n", main_Num += player_Num);

                // CHECK RESULT

                if (main_Num >= 30)
                {
                    printf("YOU WIN");
                }
                

            }

        } while (main_Num < 30);

    } else if (key_control == 4) {
        do
        {
            
            if (main_Num < 30)
            {
                
            }
            

        } while (main_Num <30);
        
    }
    
}