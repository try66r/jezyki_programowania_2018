// 1. Napisać funkcję rectinrect sprawdzającą,
// czy prostokąt jest zawarty wewnątrz prostokąta:
// rectinrect: zwróć 1 jeśli r1 jest zawarty w r2,
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

int rectinrect(struct rect r1, struct rect r2);

int main()
{
  struct rect r1 = {{0, 0}, {1, 1}};
  struct rect r2 = {{0, 0}, {1, 1}};
  printf("\n%d\n\n", rectinrect(r1, r2));
}

int rectinrect(struct rect r1, struct rect r2)
{
  return r1.ll.x >= r2.ll.x && r1.ll.y >= r2.ll.y
      && r1.ur.x <= r2.ur.x && r1.ur.y <= r2.ur.y;
}