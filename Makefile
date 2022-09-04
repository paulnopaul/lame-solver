lib:
	swipl-ld -o lame -shared lame.cpp LameSolver.cpp
run:
	swipl test.pl
