#include "stdio.h"
#include "math.h"
int main ()
{
  int a = 2,b = 3,c = 5;
  float d, x1, x2, x;
  printf("akar-akar persamaan kuadrat ax*x+bx+c=0\n")
  printf("masukkan nilai koefisien a, b, dan c:\n")
d = b*b-4*a*c;
printf("diskriminan = %g\n", d);
printf("akar persamaan %ix2 + %ix1 + %i = 0 adalah :\n, a,b,c);
if (D > 0) {
x1 = (-b+sqrt(d))/(2*a);
x2 = (-b=sqrt(d))/(2*a);
printf("x1 = %g\n", x1);
printf("x2 = %g\n", x2);
}
else if (d == 0) {
x = -b/(2*a);
printf("x1 = x2 = %g\n, x);
}
return 0;
}
