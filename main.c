#include <stdio.h>
int main() {int running = 1;int turn = 0;char WHITE_SPACE = ' ';char players[2] = "XO";char board[9] = {WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE,WHITE_SPACE};int userInput; while (running) {printf("Enter any number between 1 - 9 you can enter 0 to force quit\n%c :\n",players[turn]);scanf("%i",&userInput); if (userInput == 0) {printf("bye\n"); break;} else if (userInput < 1) {printf("[ERROR] you can't enter number less than 1\n");continue;} else if (userInput > 9) {printf("you can't enter number bigger than 9\n"); continue;} else if (board[userInput-1] != WHITE_SPACE) {printf("this place is already taken\n");continue;}board[userInput-1] = players[turn];printf("%c | %c | %c\n",board[0],board[1],board[2]);printf("---------\n");printf("%c | %c | %c\n",board[3],board[4],board[5]);printf("---------\n");printf("%c | %c | %c\n",board[6],board[7],board[8]);turn++;turn%=2;for (int col = 0; col < 3;col++) {if (board[col] != WHITE_SPACE && board[col+3] == board[col] && board[col+6] == board[col]){printf("[%c is WIN]\n",board[col]);running = 0;}}for (int row = 0; row < 3;row++) {int idx = row * 3;if (board[idx] != WHITE_SPACE && board[idx+1] == board[idx] && board[idx+2] == board[idx]){printf("[%c is WIN]\n",board[idx]);running = 0;}} if (board[0] != WHITE_SPACE && board[4] == board[0] && board[8] == board[0]) {printf("[%c is WIN]\n",board[0]);running = 0;} if (board[2] != WHITE_SPACE && board[4] == board[2] && board[6] == board[2]) {printf("[%c is WIN]\n",board[2]);running = 0;} int checker = 0;for (int i = 0;i<9;i++) { if (board[i] != WHITE_SPACE) {checker++;}} if (checker >= 9){printf("[DRAW]\n");running = 0;}}}
