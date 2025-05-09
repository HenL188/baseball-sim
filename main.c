#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "lib.h"


int main(void){
    int ba1[100];
    int ba2[100];
    int team1[100];
    int team2[100];
    int hit = 0;
    int out = 0;
    Bases base = {false};
    Score score = {0};
    for (int i = 0; i < 100; i++) {
      if(i < 40){
        ba1[i] = 1;
      }
      else ba1[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
      if(i < 40){
        ba2[i] = 1;
      }
      else ba2[i] = 0;
    }
   
    for (int i = 0; i < 100; i++) {
      // if statment writen by ai when asked how to condense loop
      if (i < 59)
        team1[i] = 1;
      else if (i < 75)
        team1[i] = 2;
      else if (i < 79)
        team1[i] = 3;
      else
        team1[i] = 4;
      }

    for (int i = 0; i < 100; i++) {
      if (i < 59)
        team2[i] = 1;
      else if (i < 75)
        team2[i] = 2;
      else if (i < 79)
        team2[i] = 3;
      else
        team2[i] = 4;
      }

    srand(time(NULL));

    while (out != 27) {
      int a = rand() % 100;
      int b = rand() % 100;
      if (ba1[a] == 1) {
          hit++;
          switch (team1[b]) {
              case 1:
                  single(&base, &score);
                  break;
              case 2:
                  _double(&base, &score);
                  break;
              case 3:
                  triple(&base, &score);
                  break;
              case 4:
                  home_run(&base, &score);
                  break;
          }
      } else out++;
        // if statment writen by ai when asked how to condense loop
        if (out % 3 == 0)  base_reset(&base);
  }
    printf("Team 1 Hits: %i\n", hit);
    printf("Team 1 Score: %i\n", score.score);
  
    out = 0;
    hit = 0;
    score.score = 0;
    
    while (out != 27) {
      int a = rand() % 100;
      int b = rand() % 100;
      if (ba2[a] == 1) {
          hit++;
          switch (team2[b]) {
              case 1:
                  single(&base, &score);
                  break;
              case 2:
                  _double(&base, &score);
                  break;
              case 3:
                  triple(&base, &score);
                  break;
              case 4:
                  home_run(&base, &score);
                  break;
          }
      } else out++;
        if (out % 3 == 0) base_reset(&base);
  } 
    printf("Team 2 Hits: %i\n", hit);
    printf("Team 2 Score: %i\n", score.score);
    return 0;
}
