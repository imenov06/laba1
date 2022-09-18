#include <iostream>
#include <cmath>
#include "string"
#include <list>
// len str = 12


int main() {
    double a;
    std::cin >> a;
    printf("|===|==============|===============|==================|\n");
    printf("| № |    X         |       a       |    result        |\n");
    printf("|===|==============|===============|==================|\n");

    int i = 1;
    double start = -16.5;
    double end = 5;
    double step = 1.5;

    while (i < 12 && start <= end) {
        start += step;
        double ans = (0.5 / (a * (sin(start / a) + cos(start))));
        if (isnanf(ans) || (a > pow(10,6)) || (a < -(pow(10,6)))||(a < (pow(10,-6)))) {
            printf("|%2i | %7.1f %6s %12s %2s %16s %1s\n", i, start, "|", "Error", "|", "Error", "|");
        } else {
            printf("|%2i | %7.3f %6s %12.3f %2s %16.3f %1s\n", i, start, "|", a, "|", ans, "|");
        }
        i++;
    }
    printf("|===|==============|===============|==================|\n");
}