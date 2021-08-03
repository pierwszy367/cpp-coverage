# mingw makefile

compile:
	if not exist "build\" mkdir build
	g++ -Wall -c funcs.cpp -o build/funcs.o
	g++ -Wall -c main.cpp -o build/main.o
	g++ build/main.o build/funcs.o -o build/main.exe

test:
	if not exist "build\" mkdir build
	g++ -Wall -c funcs.cpp -o build/funcs.o
	g++ -Wall -c tests.cpp -o build/tests.o
	g++ build/tests.o build/funcs.o -o build/tests.exe
	build/tests.exe

coverage:
	if not exist "build\" mkdir build
	g++ -Wall -c --coverage -O0 funcs.cpp -o build/funcs.o
	g++ -Wall -c --coverage -O0 tests.cpp -o build/tests.o
	g++ --coverage -O0 build/tests.o build/funcs.o -o build/tests.exe
	build/tests.exe

# run 'coverage' before
gcov_report:
	gcov -r -b build/tests
	gcov -r -b build/funcs
	if not exist "build\coverage\" mkdir "build/coverage"
	move *.gcov build/coverage
	type "build\coverage\tests.cpp.gcov"
	type "build\coverage\funcs.cpp.gcov"

# no lcov, because it is not officially on windows
# and its ports don't work on my computer
# instead i've used gcovr

# run 'coverage' before
gcovr_report:
	if not exist "build\html\" mkdir "build/html"
	gcovr -s -r . --html --html-details -o build/html/coverage.html

clean:
	rmdir /S /Q build