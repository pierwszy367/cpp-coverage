# C++ coverage

C++ tests coverage. Project uses g++ and gcov from [MinGW](http://mingw-w64.org/). It generates html report with [gcovr](https://gcovr.com/).

## How to use

First run command:

`mingw32-make coverage` - compile with coverage (generate .gcno) and run tests (generate .gcda)

Now you can run any of the commands below:

`mingw32-make gcov_report` - generate .gcov files

`mingw32-make gcovr_report` - generate html coverage report
