#include "lib.h"
#include <stdio.h>

void base_reset(int out, Bases *base){
  if (out == 3){
          base->first = false;
          base->second = false;
          base->third = false;
        }
}


void single(Bases *base, Score *score){
  if (base->first == false && base->second == false && base->third == false){
          base->first = true;
          puts("one");
        }else if (base->first == false && base->second == true && base->third == false){
          base->first = true;
          puts("two");
        }
        else if (base->first == false && base->second == false && base->third == true){
          base->first = true;
          base->third = false;
          score->score += 1;
          puts("three");
        }
        else if (base->first == true && base->second == false && base->third == false){
          base->second = true;
          puts("four");
        }
        else if (base->first == true && base->second == true && base->third == false){
          base->third = true;
          puts("five");
        }
        else if (base->first == true && base->second == false && base->third == true){
          base->second = true;
          base->third = false;
          score->score += 1;
        }
        else if (base->first == true && base->second == true && base->third == true){
          base->third = false;
          score->score += 1;
          puts("six");
        }
        else {;}
}
