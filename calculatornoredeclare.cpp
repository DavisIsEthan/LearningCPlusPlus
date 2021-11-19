/*
* Me attempting the coding exercise at the end of chapter 2, "types", in C++ crash course. 
* The exercise instructions are in four parts:
* 1.) create an enum class "Operation" with values Add, Subtract, Multiply, Divide
* 2.) create a struct calculator, it should have one construct that takes an Operation
* 3.) create a method on calculator called int calculate (int a, int b); on invocation, the method should perform
*     addition, subtraction, multiplication, or division based on its constructor argument and return the result
* 4.) Experiment with different means of initializing Calculator instances. 
*/

#include <cstdio>


// Create enum class "Operations" 
enum class Operation {
	Add,
	Subtract,
	Multiply,
	Divide
};
struct Calculator {
	Operation operate = Operation::Multiply;
	int a = 3;
	int b = 4;
	int calculate(int a, int b){
		int result = {};
		switch (operator) {
		case Operation::Add: {
			result = { a + b };
			printf(result);
		}
		case Operation::Subtract: {
			printf(result);
		}
		case Operation::Multiply: {
			result = { a * b };
			printf(result);
		}
		case Operation::Divide: {
			result = { a / b };
			printf(result);
		}
		}
	}
};


int main() {
	Calculator thecalculator; 
	thecalculator.calculate(3, 4); 

	
}