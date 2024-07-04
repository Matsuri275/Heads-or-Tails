#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* toss_coin() {
    return rand() % 2 == 0 ? "Heads" : "Tails";
}

int main() {
    
    printf("Tossing a coin...\n");

    srand(time(0));
  
    int heads_count = 0, tails_count = 0;

    for (int i = 1; i <= 3; i++) {
        char* result = toss_coin();
        printf("Round %d: %s\n", i, result);
        if (result == "Heads") heads_count++;
        else tails_count++;
    }

    printf("Heads: %d, Tails: %d\n", heads_count, tails_count);
    
    return 0;   
}