//ShadowCodder is the owrner of this game. You can use this code but you have to give me credit for this.
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <time.h>
#define ROCK 1
#define PAPER 2
#define SCISSORS 3
int main(){

    printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tWelcome to Rock Paper Scissor Game!\n\n");
    printf("\t\t\t\t\t\t\t\t\tHi there, I am Microbot! Do you wanna play Rock Paper Scissor Game with me\? Let\'s see, who becomes winner!\n\n");
    printf("If you're interested to play a match. Then, \"Press 1\"\n\n");
    printf("Otherwise! If you're not interested to play a match. Then,\"Press 2\"\n\n");
    printf("Selection:\t");

int user_input1;
    scanf("%d",&user_input1);
switch(user_input1){
 case 2:
    printf("\n\nOkay!Have a nice day!");
    break;
 case 1:
    printf("\n\nDo you wanna know details about this game's rules ?\n\n" );
    printf("1.Yeah! Tell me details.\n\n");
    printf("2.Nope! I knew it before. Just start the game.\n\n");
    printf("Selection:\t");
int user_input2;
    scanf("%d",&user_input2);
if(user_input2==1){
    printf("\n\nIn this game, you have to choose Rock, Paper or Scissor. Scissor will cut Paper, Rock will break Scissor and Paper will cover the Rock which for Paper will win here. You have three option to choose. If you wanna defeat Microbot then you have to exist with your chosen option. In 10 rounds, the one who will able make to high score. He will become winner.");
    printf("\n\nAre you ready ?\n\n");
    printf("\n1.Yeah! Let\'s begin !\n");
    printf("\n2.No! Not so interested !\n\n");
    printf("\n\nSelection:\t");
      int a;
      scanf("%d",&a);
      switch(a){
      case 2:
      printf("Okay! Best wishes for you.");
      break;
      case 1:
      printf("\nGame Started\n\n");
      int player_throw,microbot_throw;
int playerScore = 0, microbotScore = 0;
int round = 0;
int continueGame = 1;
srand(time(NULL));
while (continueGame) {
        round++;
        printf("\n");
        printf("Round %d\n", round);
        printf("\nChoose any option from below:\n\n\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissor\n");
        printf("4.Leave game\n");
        printf("\nYour Selection:\t");
        scanf("%d",&player_throw);


        // Generate random computer choice
        microbot_throw = rand() % 3 + 1;

        printf("\n");

        // Display player's choice
        printf("\nYour throw ");
        switch (player_throw) {
            case 1:
                printf("Rock!\n");
                break;
            case 2:
                printf("Paper!\n");
                break;
            case 3:
                printf("Scissors!\n");
                break;
            case 4:
                printf("nothing!");
                printf("\tGame ended.\n\n\t Final scores\n\n");
                printf("Your score      Microbot score\n\n");
                printf(" %d                    %d\n",playerScore,microbotScore);
                continueGame = 0;
                break;
            default:
                printf("Invalid choice\n");
                continue;

        }

        if (microbot_throw==ROCK)
        printf("\nMicrobot throws Rock!\n");
        else if(microbot_throw==PAPER)
        printf("\nMicrobot throws Paper!\n");
        else if (microbot_throw==SCISSORS)
        printf("\nMicrobot throws Scissor!\n");

        if(player_throw==ROCK && microbot_throw==SCISSORS){
        printf("\n\nYour Rock has broken my Scissor. You have won. I am so mad now!!\n");
        playerScore++;
        }else if(player_throw==ROCK && microbot_throw==PAPER){
        printf("\n\nMy Paper has covered your Rock. You have defeated. Huuuu! I won.\n");
        microbotScore++;
        }else if(player_throw==SCISSORS && microbot_throw==PAPER){
        printf("\n\nYour Scissor has cut my Paper. You have won.I am so mad now!!\n");
        playerScore++;
        }else if(player_throw==SCISSORS && microbot_throw==ROCK){
        printf("\n\nMy Rock has broken your Scissor. You have defeated. Huuuu! I won.\n");
        microbotScore++;
        }else if(player_throw==PAPER && microbot_throw==ROCK){
        printf("\n\nYour Paper has covered my Rock. You have won. Oh no! I lost. \n");
        playerScore++;
        }else if(player_throw==PAPER && microbot_throw==SCISSORS){
        printf("\n\nHurray! My Scissor has cut your PAPER. You have defeated! I won. You can\'t defeat Microbot. Hahaha\n");
        microbotScore++;
        }else if(player_throw==4){
        break;
        }else{
        printf("I guess it's a tie. Let\'s, play again.\n\n");
        }

         // Check if 10 rounds have been played
        if (round == 10) {
            printf("\n\tGame over!\n\n");
            printf("\tFinal scores:\n\n");
            printf("Your score      Microbot score\n\n");
            printf(" %d                    %d\n",playerScore,microbotScore);

            if (playerScore > microbotScore) {
                printf("Oh,I loose! You're winner!\n");
            } else if (playerScore < microbotScore) {
                printf("Huuu! I am winner!\n");
            } else {
                printf("It's a tie! Let's play again. \n");
            }

            printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
            scanf("%d", &continueGame);

            if (continueGame) {
                playerScore = 0;
                microbotScore = 0;
                round = 0;
                printf("\nStarting a new game...\n");
            } else {
                printf("\nGame ended. Have a nice day!\n");
            }
        }

        // Display the scoreboard after each round
         printf("\n");
         printf("\tScoreboard\n");
         printf("Your score      Microbot score\n\n");
         printf(" %d                    %d\n",playerScore,microbotScore);
         printf("\n\n");
    }
      }
}else{
      printf("\nGame Started\n\n");
      int player_throw,microbot_throw;
int playerScore = 0, microbotScore = 0;
int round = 0;
int continueGame = 1;
srand(time(NULL));
while (continueGame) {
        round++;
        printf("\n");
        printf("Round %d\n", round);
        printf("\nChoose any option from below:\n\n\n");
        printf("1.Rock\n");
        printf("2.Paper\n");
        printf("3.Scissor\n");
        printf("4.Leave game\n");
        printf("\nYour Selection:\t");
        scanf("%d",&player_throw);


        // Generate random computer choice
        microbot_throw = rand() % 3 + 1;

        printf("\n");

        // Display player's choice
        printf("\nYour throw ");
        switch (player_throw) {
            case 1:
                printf("Rock!\n");
                break;
            case 2:
                printf("Paper!\n");
                break;
            case 3:
                printf("Scissors!\n");
                break;
            case 4:
                printf("nothing!");
                printf("\tGame ended.\n\n\t Final scores\n\n");
                printf("Your score      Microbot score\n\n");
                printf(" %d                    %d\n",playerScore,microbotScore);
                continueGame = 0;
                break;
            default:
                printf("Invalid choice\n");
                continue;

        }

        if (microbot_throw==ROCK)
        printf("\nMicrobot throws Rock!\n");
        else if(microbot_throw==PAPER)
        printf("\nMicrobot throws Paper!\n");
        else if (microbot_throw==SCISSORS)
        printf("\nMicrobot throws Scissor!\n");

        if(player_throw==ROCK && microbot_throw==SCISSORS){
        printf("\n\nYour Rock has broken my Scissor. You have won. I am so mad now!!\n");
        playerScore++;
        }else if(player_throw==ROCK && microbot_throw==PAPER){
        printf("\n\nMy Paper has covered your Rock. You have defeated. Huuuu! I won.\n");
        microbotScore++;
        }else if(player_throw==SCISSORS && microbot_throw==PAPER){
        printf("\n\nYour Scissor has cut my Paper. You have won.I am so mad now!!\n");
        playerScore++;
        }else if(player_throw==SCISSORS && microbot_throw==ROCK){
        printf("\n\nMy Rock has broken your Scissor. You have defeated. Huuuu! I won.\n");
        microbotScore++;
        }else if(player_throw==PAPER && microbot_throw==ROCK){
        printf("\n\nYour Paper has covered my Rock. You have won. Oh no! I lost. \n");
        playerScore++;
        }else if(player_throw==PAPER && microbot_throw==SCISSORS){
        printf("\n\nHurray! My Scissor has cut your PAPER. You have defeated! I won. You can\'t defeat Microbot. Hahaha\n");
        microbotScore++;
        }else if(player_throw==4){
        break;
        }else{
        printf("I guess it's a tie. Let\'s, play again.\n\n");
        }

         // Check if 10 rounds have been played
        if (round == 10) {
            printf("\n\tGame over!\n\n");
            printf("\tFinal scores:\n\n");
            printf("Your score      Microbot score\n\n");
            printf(" %d                    %d\n",playerScore,microbotScore);

            if (playerScore > microbotScore) {
                printf("\nOh,I loose! You're winner!\n");
            } else if (playerScore < microbotScore) {
                printf("\nHuuu! I am winner!\n");
            } else {
                printf("It's a tie! Let's play again. \n");
            }

            printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
            scanf("%d", &continueGame);

            if (continueGame) {
                playerScore = 0;
                microbotScore = 0;
                round = 0;
                printf("\nStarting a new game...\n");
            } else {
                printf("\nGame ended. Have a nice day!\n");
            }
        }

        // Display the scoreboard after each round
         printf("\n");
         printf("\tScoreboard\n");
         printf("Your score      Microbot score\n\n");
         printf(" %d                    %d\n",playerScore,microbotScore);
         printf("\n\n");
    }
      }
}



     return 0;
}
