#include <iostream>
#include "LameSolver.h"

int main() {
    auto x = LameSolver(50, 200e5, 600, 200, 2);
    std::cout << "Delta = " << x.Solve() << std::endl;
    return 0;
}
