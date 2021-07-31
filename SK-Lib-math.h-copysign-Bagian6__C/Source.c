#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("copysign(1.0,+2.0)      = %+.1f\n", copysign(1.0, +2.0));
    printf("copysign(1.0,-2.0)      = %+.1f\n", copysign(1.0, -2.0));
    printf("copysign(INFINITY,-2.0) = %f\n", copysign(INFINITY, -2.0));
    printf("copysign(NAN,-2.0)      = %f\n", copysign(NAN, -2.0));

    _getch();
    return 0;
}