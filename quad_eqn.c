#include <stdio.h>
#include <math.h>
void main()
{
  float a, b, c, dis;
  float r1, r2, real, img;
  printf("Enter the coefficient of a\n");
  scanf("%f", &a);
  printf("Enter the coefficient of b\n");
  scanf("%f", &b);
  printf("Enter the coefficient of c\n");
  scanf("%f", &c);

  if ((a == 0) && (b == 0))
  {
    printf("Invalid coefficients, coefficient can't be zero\n");
  }
  else if (a == 0)
  {
    printf("Linear Equation\n");
    r1 = -c/b;
    printf("Root : %f", r1);
  }
  else
  {
    dis = b*b-4*a*c;

    if (dis == 0)
    {
      printf("The Roots are Real and Equal\n");
      r1 = r2 = -b/(2*a);
      printf("Root 1 = %f\nRoot 2 = %f", r1, r2);
    }
    else if (dis > 0)
    {
      printf("The Roots are Real and Distinct\n");
      r1 = (-b+sqrt(dis))/(2*a);
      r2 = (-b-sqrt(dis))/(2*a);
      printf("Root 1 = %f\nRoot 2 = %f", r1, r2);
    }
    else
    {
      printf("The Roots are Real and Imaginary\n");
      real = -b/(2*a);
      img = (sqrt(fabs(dis)))/(2*a);
      printf("Root 1 = %f+i%f\n", real, img);
      printf("Root 2 = %f-i%f\n", real, img);
    }
  }
}
