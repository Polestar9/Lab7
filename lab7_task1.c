#include <stdio.h>
#include <math.h>

void CoordinateInput(double *xA, double *yA, double *xB, double *yB)
{
printf("Input A coordinates (xA): ");
scanf("%lf", xA);
printf("Input A coordinates (yA): ");
scanf("%lf", yA);
printf("Input B coordinates (xB): ");
scanf("%lf", xB);
printf("Input B coordinates (yB): ");
scanf("%lf", yB);
}

double Leng(double xA, double yA, double xB, double yB)
{
double lengh = sqrt(((xA-xB)*(xA-xB) + (yA-yB)*(yA-yB)));
return lengh;
}

int CoordinateFail(double xA, double yA, double xB, double yB, double lengh)
{
if (xA==xB && yA==yB)
{
printf("Cannot calculate the lenght, since points coincide, and the lengh is a zero.");
return 0;
} 
else if (lengh<0)
{
printf("Cannot calculate the lenght, since the line lengh is negative.");
return 0;
}
else
{
return 1;
}
}
int main()
{
double xA, yA, xB, yB, lengh;
CoordinateInput(&xA, &yA, &xB, &yB);
if (CoordinateFail(xA, yA, xB, yB, lengh))
{
double result = Leng(xA, yA, xB, yB);
printf("Lenght of AB line is: %.2lf\n", result);
}
return 0;
}