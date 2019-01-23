// 2. Napisać funkcję disjointrect sprawdzającą,
// czy prostokąty są rozłączne:
// disjointrect: zwróć 1 jeśli r1 jest rozłączny z r2,
// 0 — w przeciwnym przypadku.

#include <stdio.h>

struct point
{
  int x;
  int y;
};

struct rect
{
  struct point ll;
  struct point ur;
};

int disjointrect(struct rect r1, struct rect r2);

int main()
{
  struct rect r1 = {{0, 0}, {1, 1}};
  struct rect r2 = {{2, 2}, {3, 3}};
  printf("\n%d\n\n", disjointrect(r1, r2));
}

int disjointrect(struct rect r1, struct rect r2)
{
  return r1.ur.x < r2.ll.x || r1.ur.y < r2.ll.y
      || r1.ll.x > r2.ur.x || r1.ll.y > r2.ur.y;
}