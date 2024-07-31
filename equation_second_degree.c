#include <stdio.h>
#include <math.h>

void reslove_equation(double a, double b, double c) {
    double x1,x2;
    if (a == 0) {
        x2=x1=-c/b;
        printf("La solution est %.1lf\n", x1);
        return;
    }

    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les solution sont:\n");
        printf("X1 = %.1lf\n", x1);
        printf("X2 = %.1lf\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("La seule solution est:\n");
        printf("Root = %.1lf\n", x1);
    } else {
        double reel_part = -b / (2 * a);
        double img_Part = sqrt(-delta) / (2 * a);
        printf("Les solution sont complexe.\n");
        printf("Et ils sont :\n");
        printf("x1 = %.1lf + %.1lfi\n", reel_part, img_Part);
        printf("x2 = %.1lf - %.1lfi\n", reel_part, img_Part);
    }
}
int main() {
    double a,b,c;
    printf("Entrer les coefficients a, b and c: \n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("Resolvons: %.1lfx^2 + %.1lfx + %.1lf = 0\n", a, b, c);
    reslove_equation(a, b, c);
   return 0;
}
