//
// Created by Pavel Cheklin on 30.08.2022.
//

#ifndef LAME_SOLVER_LAMESOLVER_H
#define LAME_SOLVER_LAMESOLVER_H


class LameSolver {
public:
    LameSolver(double a, double E, double q, double pMax, double pK);

    double Solve();
private:
    double a; // внутренний диаметр, который нам известен
    double E; // модуль юнга
    double q; // внешнее и внутренне напряжение, в задаче равны
    double pMax; // максимальное давление
    double pK; // необходимый запас проности
};


#endif //LAME_SOLVER_LAMESOLVER_H
