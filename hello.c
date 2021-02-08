#include <stdio.h>
#include <stdint.h>

typedef struct {
  int a[2];
  double d;
} struct_t;

double fun(int i) {
  volatile struct_t s;
  s.d = 3.14;
  s.a[i] = 1073741824; /* Possibly out of bounds */
  return s.d;
}

int main()
{
    printf("hello, world\n");
    printf("fun(0): %lf\n", fun(0));
    printf("%lf\n", fun(1));
    printf("%lf\n", fun(2));
    // printf("%lf\n", fun(3));
    // printf("%lf\n", fun(4));
    // printf("%lf\n", fun(6));


    int tx, ty = -9;
    unsigned int ux = 8, uy;
    tx = (int) ux;
    uy = (unsigned) ty;

    printf("%d\n", tx);
    printf("%u\n", uy);


    return 0;
}

