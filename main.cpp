#include <iostream>
#include "LameSolver.h"

int main() {
    auto x = LameSolver();
    std::cout << x.Solve() << std::endl;
    return 0;
}
