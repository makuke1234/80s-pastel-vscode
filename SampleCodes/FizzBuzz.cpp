/*
 *	FizzBuzz
 */
#include <iostream>

int main(int argc, char ** argv)
{
	for (int number = 0; number <= 100; ++number)
	{
		if (number % 15 == 0)
		{
			std::cout << "FizzBuzz";
		}
		else if (number % 3 == 0)
		{
			std::cout << "Fizz";
		}
		else if (number % 5 == 0)
		{
			std::cout << "Buzz";
		}
		else
		{
			std::cout << number;
		}
		std::cout << ' ';
	}

	// Add new line
	std::cout << std::endl;

	return 0;
}
