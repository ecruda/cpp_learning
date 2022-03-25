This is chapter 1 learning outcomes:
-made a hello world file(see hello.cpp)
-future ref: name c++ files with .cpp


Important:

-To compile use command "g++ -o executable_file_name C++_file_name.cpp"
	eg. g++ -o hello hello.cpp

-To run executable, use command "./executable_file_name"
	eg. ./hello

Quiz:
1) Difference between an interpreter and a compiler
	Compiler turns the whole code in the .cpp text file into byte code that the processor can understand
	but can also throw errors during compilation while the interpreter goes line by line in the code. I think
	its better in general to use compilers?? In the book, it says performance takes a hit as the interpreter works as a runtime translator 
	between the microprocessor and the code written.

2) What does the linker do?
	links the necessary dependencies and creates executables

3) Steps in normal development cycle?
	a) build first iteration of program
	b) compile and debug for errors
	c) linking and running the executable

4) How does the C++11 Standard better support multicore CPUs?
	Additions to the functionality in C++11 support concurrent execution paaradigms and scale in performance when user boosts capability of 
	hardware configuration by increasing the number of CPU cores

Exercises:
1)the code will be "2 48 14"
2)its right
3)no # on the include statement
4) after adding the #, it says Hello Buggy World

