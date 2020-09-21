#include <stdio.h>

int main() {

      int x,y,z,g;
    scanf ("%d%d%d", &x, &y, &z);
    g=x;
    if(x<y  || x<z)
  {
      if(y<z)
      {
          g=z;
      }
      else
      {
          g=y;
      }
  }
      printf("%d eh o maior\n", g);

    return 0;
}
