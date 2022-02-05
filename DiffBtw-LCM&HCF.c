#include <stdio.h>
int gcd(int ,int );

int main() {
  int  x, y, hcf, lcm;

  scanf("%d%d", &x, &y);

  hcf = gcd(x, y);
  lcm = (x*y)/hcf;

printf("%d",abs(hcf-lcm));
  return 0;
}

int gcd(int x, int y) {
  if (x == 0) {
    return y;
  }

  while (y != 0) {
    if (x > y)
      x = x - y;
    else
      y = y - x;
  }

  return x;
}
