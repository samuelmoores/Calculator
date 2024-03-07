#include <iostream>

enum States { ADD, SUBTRACT, MULTIPLY, DIVIDE };

//adds two numbers together
int Add(int a, int b)
{
	std::cout << "welcome to the add function\n";

	return a + b;
}

//subtracts two numbers
int Subtract(int x, int y)
{
	//output a message
	std::cout << "welcome to the subtract function\n";

	return x - y;
}

int Multiply(int x, int y)
{
	std::cout << "welcome to the multiply function\n";

	return x * y;
}

int Divide(int a, int b) {
	std::cout << "divide " << a << " and " << b << "\n";
	if (b == 0) {
		std::cout << "cant divide by 0\n";
	}
	else {
		return a / b;
	}
}

//what is the return value? int
int main()
{
	//------- variables --------
	int x = 0;
	int y = 0;
	int operation = 0;//could be 0, 1, 2, 3
	bool runCalculator = true;

	//calculator loop
	while (runCalculator)
	{
		std::cout << "enter (0) add, (1) subtract, (2) multiply, (3) divide\n";
		std::cin >> operation;

		//get input
		std::cout << "enter the two operands:\n";
		std::cin >> x >> y;

		switch (operation)
		{
		case ADD:
			//add
			std::cout << Add(x, y) << "\n";
			break;

		case SUBTRACT:
			//subtract
			std::cout << Subtract(x, y) << "\n";
			break;

		case MULTIPLY:
			//multipy
			std::cout << Multiply(x, y) << "\n";
			break;

		case DIVIDE:
			//divide
			std::cout << Divide(x, y) << "\n";
			break;
		}
	}
	
	return 0;
}

