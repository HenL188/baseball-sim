#include "lib.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

Batting average() {
    Batting bat = {0};
    char buff[20];
    char buff2[20];
    float ba = 0.0f;
    float ba2 = 0.0f;
    float bar = 0.0f;
    float ba2r = 0.0f;    

    printf("Enter batting average for team 1: ");
    fgets(buff,sizeof(buff),stdin);
    
    printf("Enter batting average for team 2: ");
    fgets(buff2,sizeof(buff2),stdin);

    buff[strcspn(buff, "\n")] = '\0';
    buff2[strcspn(buff2, "\n")] = '\0';
    
    ba = atof(buff);
    ba2 = atof(buff2);

    bar = roundf(ba);
    ba2r = roundf(ba2);

    bat.ba = (int)bar;
    bat.ba2 = (int)ba2r;

    return bat;
}

//ai used to condense
Percentage percentage(){
    Percentage p = {0};
    char buff[20];
    float s = 0.0f;
    float d = 0.0f;
    float t = 0.0f;
    float s2 = 0.0f;
    float d2 = 0.0f;
    float t2 = 0.0f;
    
    printf("Enter single percentage for team 1: ");
    fgets(buff,sizeof(buff),stdin);
    s = roundf(atof(buff));
    
    printf("Enter double percentage for team 1: ");
    fgets(buff,sizeof(buff),stdin);
    d = roundf(atof(buff));
    
    printf("Enter triple percentage for team 1: ");
    fgets(buff,sizeof(buff),stdin);
    t = roundf(atof(buff));

    p.s = (int)s;
    p.d = s + (int)d;
    p.t = d + (int)t;

    printf("Enter single percentage for team 2: ");
    fgets(buff,sizeof(buff),stdin);
    s2 = roundf(atof(buff));
    
    printf("Enter double percentage for team 2: ");
    fgets(buff,sizeof(buff),stdin);
    d2 = roundf(atof(buff));
    
    printf("Enter triple percentage for team 2: ");
    fgets(buff,sizeof(buff),stdin);
    t2 = roundf(atof(buff));

    p.s2 = (int)s2;
    p.d2 = s2 + (int)d2;
    p.t2 = d2 + (int)t2;

    return p;
}



void base_reset(Bases *base){
      base->first = false;
      base->second = false;
      base->third = false;
};

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
          score->score += 1;
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

void _double(Bases *base, Score *score){
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
          base->third = true;
        }
        else if (base->first == true && base->second == true && base->third == false){
          base->first = false;
          base->third = true;
          score->score += 1;
        }
        else if (base->first == false && base->second == true && base->third == true){
          base->second = true;
          base->third = false;
          score->score += 2;
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
  if (base->first == false && base->second == false && base->third == false){
          base->third = true;  
        }
        else if (base->first == false && base->second == true && base->third == false){
          base->third = true;
          score->score += 1;
        }
        else if (base->first == false && base->second == false && base->third == true){
          score->score += 1;
        }
        else if (base->first == true && base->second == false && base->third == false){
          base->first = false;
          base->third = true;
          score->score += 1;
        }
        else if (base->first == true && base->second == true && base->third == false){
          base->first = false;
          base->second = false;
          base->third = true;
          score->score += 2;
        }
        else if (base->first == false && base->second == true && base->third == true){
          base->second = false;
          score->score += 2;
        }
        else if (base->first == true && base->second == false && base->third == true){
          base->first = false;
          score->score += 2;
        }
        else if (base->first == true && base->second == true && base->third == true){
          base->first = false;
          base->second= false;
          score->score += 3;
        }
        else {;}
}
void home_run(Bases *base, Score *score){
  if (base->first == false && base->second == false && base->third == false){
          score->score += 1;  
        }
        else if (base->first == false && base->second == true && base->third == false){
          base_reset(base);
          score->score += 2;
        }
        else if (base->first == false && base->second == false && base->third == true){
          base_reset(base);
          score->score += 2;
        }
        else if (base->first == true && base->second == false && base->third == false){
          base_reset(base);
          score->score += 2;
        }
        else if (base->first == true && base->second == true && base->third == false){
          base_reset(base);
          score->score += 3;
        }
        else if (base->first == false && base->second == true && base->third == true){
          base_reset(base);    
          score->score += 3;
        }
        else if (base->first == true && base->second == false && base->third == true){
          base_reset(base);
          score->score += 3;
        }
        else if (base->first == true && base->second == true && base->third == true){
          base_reset(base);
          score->score += 4;
        }
        else {;}
}
