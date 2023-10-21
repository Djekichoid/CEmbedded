#include <stdio.h>
#include <math.h>

int main() {
    double z1, z2, alpha;
    printf("Enter alpha in degrees:");
    scanf("%lf", &alpha);
    if((int)alpha%90==0){
        printf("Alpha cannot be 180 or 90 degrees!!!\n");
        return 0;
    }
    alpha=alpha * M_PI / 180;
    z1 = (sin(2*alpha)+sin(5*alpha)-sin(3*alpha))/(cos(alpha)-cos(3*alpha)+ cos(5*alpha));
    z2 = tan(3*alpha);
    printf("%.3f\n", z1);
    printf("%.3f\n", z2);
    return 0;
}
