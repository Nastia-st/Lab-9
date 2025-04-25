#include <stdio.h>
#include <math.h>

#define N 5 
#define NO_ROOT 1e38

int main() {
    system("chcp 65001");
    double P[N] = {1, -3, 2, 4, 5};
    double Q[N] = {1, 2, -8, 4, 6};
    double Z[N];

    for (int i = 0; i < N; i++) {
        double D = P[i] * P[i] - 4 * Q[i];

        if (D >= 0) {
            double sqrtD = sqrt(D);
            double root1 = (-P[i] + sqrtD) / 2.0;
            double root2 = (-P[i] - sqrtD) / 2.0;
            Z[i] = (root1 > root2) ? root1 : root2;
        } else {
            Z[i] = NO_ROOT;
        }
    }

    printf("Масив Z:\n");
    for (int i = 0; i < N; i++) {
        printf("Z[%d] = %.2e\n", i, Z[i]); 
    }

    return 0;
}