#include <stdbool.h>

typedef struct {
  bool first;
  bool second;
  bool third;
} Bases;

typedef struct {
  int score;
} Score;

typedef struct {
  int ba;
  int ba2;
} Batting;


Batting average();

void base_reset(Bases *base);

void single(Bases *base, Score *score);
void _double(Bases *base, Score *score);
void triple(Bases *base, Score *score);
void home_run(Bases *base, Score *score);
