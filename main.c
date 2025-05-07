#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

typedef struct Bases {
  bool first;
  bool second;
  bool third;
} Bases;

int main(void){
    int stats[100];
    int hit = 0;
    int out = 0;
    int score = 0;
    Bases base;
    for (int i = 0; i < 30; i++) {
      stats[i] = 1;
    }
    for (int i = 30; i < 100; i++){
      stats[i] = 0;
    }

    srand(time(NULL));

    while(out != 27){
      int num = rand() % 100;
      if (stats[num] == 1){
        hit++;
        if (base.first == false && base.second == false && base.third == false){
          base.first = true;
          puts("one");
        }else if (base.first == false && base.second == true && base.third == false){
          base.first = true;
          puts("two");
        }
        else if (base.first == false && base.second == false && base.third == true){
          base.first = true;
          base.third = false;
          score++;
          puts("three");
        }
        else if (base.first == true && base.second == false && base.third == false){
          base.second = true;
          puts("four");
        }
        else if (base.first == true && base.second == true && base.third == false){
          base.third = true;
          puts("five");
        }
        else if (base.first == true && base.second == true && base.third == true){
          base.third = false;
          score++;
          puts("six");
        }
        else {
          puts("seven");
          continue;
        }
      }else {
        out++;
      }
    }

    // for(int i = 0; i < 100; i++){
    //       }

    printf("Hit: %i\nOut: %i\n", hit, out);
    printf("Score: %i\n", score);
    
    return 0;
}
