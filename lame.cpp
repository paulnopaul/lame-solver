#define PROLOG_MODULE "user"

#include "SWI-cpp.h"

#include "LameSolver.h"
#include <string>
#include <iostream>

using namespace std;

PREDICATE(hello, 1)
{ cout << "Hello " << (char *)A1 << endl;
return TRUE;
}

PREDICATE(hello, 0)
{ PlQuery q("write", PlTermv("hello world\n"));
return q.next_solution();
}



PREDICATE(lame, 6) {
   return A6 = (float)LameSolver(double(A1), double(A2), double(A3), double(A4), double(A5)).Solve();
}

// lame(50, 20000000, 600, 200, 2, A). - goal
// localhost:8080/lame?a=50&e=20000000&q=600&pmax=200&pk=2 - request
