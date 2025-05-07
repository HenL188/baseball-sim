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
