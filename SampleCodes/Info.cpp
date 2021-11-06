#include <iostream>
#include <string>

class Student
{
private:
	std::string m_name;
	std::uint8_t m_age;

public:
	Student(const std::string & name, std::uint8_t age)
		: m_name(name), m_age(age)
	{}

	[[nodiscard]] std::string & name() noexcept
	{
		return this->m_name;
	}
	[[nodiscard]] std::uint8_t & age() noexcept
	{
		return this->m_age;
	}
};

int main()
{
	Student stud;

	std::cout << "What is your name?: ";
	std::cin >> stud.name();

	std::cout << "What is your age?: ";
	std::cin >> stud.age();

	std::cout << "Hello, " << stud.name() << "! Nice to see you again!\n";

	if (stud.age() > 6)
	{
		std::cout << "Seems like you are ready for school.\n";
	}
	else if (stuf.age() > 2)
	{
		std::cout << "Kindergarten is on the way...\n";
	}
	else
	{
		std::cout << "You were born quite young to this world.\n";
	}

	return 0;
}