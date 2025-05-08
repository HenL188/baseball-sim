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
        }
        else if (base->first == false && base->second == true && base->third == false){
          base->first = true;
        }
        else if (base->first == false && base->second == false && base->third == true){
          base->first = true;
          base->third = false;
          score->score += 1;
        }
        else if (base->first == true && base->second == false && base->third == false){
          base->second = true;
        }
        else if (base->first == true && base->second == true && base->third == false){
          base->third = true;
        }
        else if (base->first == false && base->second == true && base->third == true){
          base->first = true;
          base->second = false;
          score->socre += 1;
        }    
        else if (base->first == true && base->second == false && base->third == true){
          base->second = true;
          base->third = false;
          score->score += 1;
        }
        else if (base->first == true && base->second == true && base->third == true){
          base->third = false;
          score->score += 1;
        }
        else {;}
}

void double(Bases *base, Score *score){
  if (base->first == false && base->second == false && base->third == false){
          base->second = true;  
        }
        else if (base->first == false && base->second == true && base->third == false){
          base->second = true;
          score->score += 1;
        }
        else if (base->first == false && base->second == false && base->third == true){
          base->second = true;
          base->third = false;
          score->score += 1;
        }
        else if (base->first == true && base->second == false && base->third == false){
          base->first = false;
          base->second = true;
          base->thrid = true;
        }
        else if (base->first == true && base->second == true && base->third == false){
          base->first = false;
          base->third = true;
          score->score += 1;
        }
        else if (base->first == false && base->second == true && base->third == true){
          base->second = true;
          base->third = false;
          score->socre += 2;
        }
        else if (base->first == true && base->second == false && base->third == true){
          base->first = false;
          base->second = true;
          score->score += 1;
        }
        else if (base->first == true && base->second == true && base->third == true){
          base->first = false;
          score->score += 2;
        }
        else {;}
}
void triple(Bases *base, Score *score){
  
}
void home_run(Bases *base, Score *score){
  
}
