#include <stdbool.h>

typedef struct Bases {
  bool first;
  bool second;
  bool third;
} Bases;

typedef struct Score {
  int score;
} Score;


void base_reset(int out, Bases *base);

void single(Bases *base, Score *score);
void double(Bases *base, Score *score);
void triple(Bases *base, Score *score);
void home_run(Bases *base, Score *score);
