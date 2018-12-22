#include<stdio.h>

const int width = 1000;
const int height = 1000;

void fill_with_0(int fabric[height][width]);
void draw(int fabric[height][width]);
int count_area(int fabric[height][width]);

int main()
{
  int base_fabric[height][width];
  int result;

  fill_with_0(base_fabric);
  draw(base_fabric);
  result = count_area(base_fabric);
  printf("\nArea: %d\n\n", result);
}

void fill_with_0(int fabric[height][width])
{
  for (int i = 0; i < height; ++i)
  {
    for (int j = 0; j < width; ++j)
    {
      fabric[i][j] = 0;
    }
  }
}

void draw(int fabric[height][width])
{
  char buffer[BUFSIZ];
  int id, x, y, size_x, size_y;

  while ((fgets(buffer, BUFSIZ, stdin)) != NULL)
  {
    sscanf(buffer, "#%d @ %d,%d: %dx%d", &id, &x, &y, &size_x, &size_y);
    for (int i = y; (i < size_y + y) && (i < height); ++i)
    {
      for (int j = x; (j < size_x + x) && (j < width); ++j)
      {
        if (fabric[i][j] == 0)
          fabric[i][j] = id;
        else
          fabric[i][j] = -1;
      }
    }
  }
}

int count_area(int fabric[height][width])
{
  int area = 0;

  for (int i = 0; i < height; ++i)
  {
    for (int j = 0; j < width; ++j)
    {
      if (fabric[i][j] == -1)
        ++area;
    }
  }
  return area;
}