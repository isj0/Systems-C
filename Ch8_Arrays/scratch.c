/* Deals a random hand of cards */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void) {

    bool in_hand[NUM_SUITS] [NUM_RANKS] = {false};
    int num_cards, rank, suit;
    const char rank_code[] = {'2', '3', '4', '5', '6', '7', '8',
                                '9', 't', 'j', 'q', 'k', 'a'};
    const char suit_code[] = {'c', 'd', 'h', 's'};

    srand((unsigned) time(NULL));
    
    suit = rand() % NUM_SUITS;      /* picks a random suit */
        
    rank = rand() % NUM_RANKS;      /* picks a random rank */

    printf(" %d, %d", rank, suit);
    printf(" %c%c", rank_code[rank], suit_code[suit]);

    printf("\n");
    

    return 0;
}