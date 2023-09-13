//nijada kacmoli
#include <stdio.h>
#include <stdbool.h>
 
char c[1005];
int main() {
  int test;
  scanf("%d", &test);
  int l;
  while (test--) {
    scanf("%d", &l);
    scanf("%s", c + 1);
    int u = 0;
    for (int i = 1; i <= l; ++i) {
      bool f = (c[i] == '1') && u;
      u ^= (c[i] - '0');
      if (i != 1) putchar(f ? '-' : '+');
    }
    putchar('\n');
  }
}
//nijada kacmoli
