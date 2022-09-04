//
// Created by Pavel Cheklin on 30.08.2022.
//

#include "LameSolver.h"

#include <iostream>
#include <cmath>

LameSolver::LameSolver(double a, double E, double q, double pMax, double pK) :
        a(a), E(E), q(q), pMax(pMax), pK(pK) {
}

double LameSolver::Solve() {
    double b = (q * a) / (q - pK * pMax);
    double c = sqrt(a * b);
    double delta = c * (pMax / E);
    return delta;
}
