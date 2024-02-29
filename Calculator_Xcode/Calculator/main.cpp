#include <iostream>

enum States { ADD, SUBTRACT, MULTIPLY, DIVIDE };

int main()
{
	//------- variables --------
	int x = 0;
	int y = 0;
	int operation = 3;//could be 0, 1, 2, 3

	//get input
	std::cin >> x >> y;

	switch (operation)
	{
	case ADD:
		std::cout << x + y;
		break;

	case SUBTRACT:
		std::cout << x - y;
		break;

	case MULTIPLY:
		std::cout << x * y;
		break;

	case DIVIDE:
		if (y == 0)
		{

		}
		else
		{
			std::cout << x / y;

		}
		break;
	}
		








	//calculate
	
}

