#include "WrongAnimal.hpp"

// default constructor
WrongAnimal::WrongAnimal(): _type("Unknown")
{
	std::cout << "WrongAnimal Default contructor called" << std::endl;
}
// Type constructor
WrongAnimal::WrongAnimal(const std::string& type)
{
	if (type.empty())
		_type = "Unknown";
	else
		_type = type;
	std::cout << "WrongAnimal constructor called" << std::endl;
}
// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
	_type = other._type;
	std::cout << "Copy constructor called" << std::endl;

}
// Copy assignment operator overload
WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
}

// Destructor
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called." << std::endl;
}


void	WrongAnimal::makeSound()
{
	std::cout << "WrongAnimal sound./n" ;
}
