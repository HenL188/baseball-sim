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

typedef struct {
  int s;
  int d;
  int t;
  int s2;
  int d2;
  int t2;
} Percentage;

Batting average();
Percentage percentage();

void base_reset(Bases *base);

void single(Bases *base, Score *score);
void _double(Bases *base, Score *score);
void triple(Bases *base, Score *score);
void home_run(Bases *base, Score *score);
