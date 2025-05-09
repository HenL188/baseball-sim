#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "lib.h"


int main(void){
    int ba[100];
    int stats[100];
    int hit = 0;
    int out = 0;
    Bases base;
    Score score = {0};
    for (int i = 0; i < 40; i++) {
      ba[i] = 1;
    }
    for (int i = 40; i < 100; i++){
      ba[i] = 0;
    }

    for (int i = 0; i < 59; i++) {
      stats[i] = 1;
    }
    for (int i = 59; i < 75; i++) {
      stats[i] = 2;
    }
    for (int i = 75; i < 79; i++) {
      stats[i] = 3;
    }
    for (int i = 79; i < 100; i++) {
      stats[i] = 4;
    }
    
    srand(time(NULL));

    while(out != 27){
      while(out < 3 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 3) base_reset(&base);
      }
      while(out < 6 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 6) base_reset(&base);
      }
      while(out < 9 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 9) base_reset(&base);
      }
      while(out < 12 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 12) base_reset(&base);
      }
      while(out < 15 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 15) base_reset(&base);
      }
      while(out < 18 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 18) base_reset(&base);
      }
      while(out < 21 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 21) base_reset(&base);
      }
      while(out < 24 ){
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
        if (out == 24) base_reset(&base);
      }
        int a = rand() % 100;
        int b = rand() % 100;
        if (ba[a] == 1){
          hit++;
          switch(stats[b]){
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
        }
        else out++;
      }

    printf("Hit: %i\nOut: %i\n", hit, out);
    printf("Score: %i\n", score.score);
    
    return 0;
}
