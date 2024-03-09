#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{

    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");


    int score1 = compute_score(word1);
    int score2 = compute_score(word2);



    if (score1 > score2) {
        printf(" PLAYER 1 WINS!\n -----> %i\n ", score1);
    }
   else if (score2 > score1){
        printf(" PLAYER 2 WINS! \n -----> %i\n ", score2);
    }
    else {
        printf("IT'S A TIE! \n");
    }

}

int compute_score(string word)
{
    int score = 0;
    for(int i = 0, n = strlen(word); i < n; i++){
        if(isalpha(word[i])){
            char uppercase_char = toupper(word[i]);

            int index = uppercase_char - 'A';

            score += POINTS[index];
        }
    }
    return score;
}
