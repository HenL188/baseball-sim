#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

#include "lib.h"


int main(void){
    int ba1[100];
    int ba2[100];
    int team1[100];
    int team2[100];
    int team1score = 0;
    int hit = 0;
    int out = 0;
    int team1win = 0;
    int team2win = 0;
    Bases base = {false};
    Score score = {0};

    Batting bat = average();
    Percentage p = percentage();
    
    for (int i = 0; i < 100; i++) {
      if(i < bat.ba){
        ba1[i] = 1;
      }
      else ba1[i] = 0;
    }

    for (int i = 0; i < 100; i++) {
      if(i < bat.ba2){
        ba2[i] = 1;
      }
      else ba2[i] = 0;
    }
   
    for (int i = 0; i < 100; i++) {
      // if statment writen by ai when asked how to condense loop
      if (i < p.s)
        team1[i] = 1;
      else if (i < p.d) 
        team1[i] = 2;
      else if (i < p.t)
        team1[i] = 3;
      else
        team1[i] = 4;
      }

    for (int i = 0; i < 100; i++) {
      if (i < p.s2)
        team2[i] = 1;
      else if (i < p.d2)
        team2[i] = 2;
      else if (i < p.t2)
        team2[i] = 3;
      else
        team2[i] = 4;
      }

    srand(time(NULL));

    for(int i = 0; i < 1000; i++){

    tie:
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
      
    out = 0;
    hit = 0;
    team1score = score.score;
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
    if (team1score == score.score){
      goto tie;
    }
    else if(team1score > score.score){
      team1win++;
    }
    else {
      team2win++;
    }

  }

    printf("Team one wins %i times\n", team1win);
    printf("Team two wins %i times\n", team2win);
    // printf("Teams tie %i times\n", tie);
        
    return 0;
}
