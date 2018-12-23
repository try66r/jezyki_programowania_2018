#include <stdio.h>

const int width = 1000;
const int height = 1000;

void fill_with_0(int fabric[height][width]);
void draw(int fabric[height][width], FILE *sour);
int recheck(int fabric[height][width], FILE *sour);

int main(int argc, char *argv[])
{
  FILE *in_handle;
  int base_fabric[height][width];
  int result;

  in_handle = fopen(argv[1], "r");
  fill_with_0(base_fabric);
  draw(base_fabric, in_handle);
  result = recheck(base_fabric, in_handle);
  printf("\nID: %d\n\n", result);
  fclose(in_handle);
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

void draw(int fabric[height][width], FILE *sour)
{
  char buffer[BUFSIZ];
  int id, x, y, size_x, size_y;

  while ((fgets(buffer, BUFSIZ, sour)) != NULL)
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

int recheck(int fabric[height][width], FILE *sour)
{
  char buffer[BUFSIZ];
  int id, x, y, size_x, size_y;
  int area;

  rewind(sour);
  while ((fgets(buffer, BUFSIZ, sour)) != NULL)
  {
    sscanf(buffer, "#%d @ %d,%d: %dx%d", &id, &x, &y, &size_x, &size_y);
    area = size_x * size_y;
    for (int i = y; (i < size_y + y) && (i < height); ++i)
    {
      for (int j = x; (j < size_x + x) && (j < width); ++j)
      {
        if (fabric[i][j] == id)
          --area;
      }
    }
    if(area == 0)
      break;
  }
  return id;
}