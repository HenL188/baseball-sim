#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "lib.h"


int main(void){
    int stats[100];
    int hit = 0;
    int out = 0;
    Bases base;
    Score score = {0};
    for (int i = 0; i < 30; i++) {
      stats[i] = 1;
    }
    for (int i = 30; i < 100; i++){
      stats[i] = 0;
    }

    srand(time(NULL));

    while(out != 27){
      while(out < 3 ){
        int num = rand() % 100;
        if (stats[num] == 1){
          hit++;
          single(&base, &score);
        }
        else out++;
        base_reset(out,&base);
      }
        out++;
      }

    printf("Hit: %i\nOut: %i\n", hit, out);
    printf("Score: %i\n", score.score);
    
    return 0;
}
