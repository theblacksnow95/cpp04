#include "Animal.hpp"
// default constructor
Animal::Animal(): _type("Unknown")
{
	std::cout << "Animal Default contructor called" << std::endl;
}
// Type constructor
Animal::Animal(const std::string& type)
{
	if (type.empty())
		_type = "Unknown";
	else
		_type = type;
	std::cout << "Animal constructor called" << std::endl;
}
// Copy constructor
Animal::Animal(const Animal& other)
{
	_type = other._type;
	std::cout << "Copy constructor called" << std::endl;

}
// Copy assignment operator overload
Animal&	Animal::operator=(const Animal& other)
{
	if (this != &other)
	{
		_type = other._type;
	}
	return (*this);
	std::cout << "Copy assignment operator called" << std::endl;
}

// Destructor
Animal::~Animal()
{
	std::cout << "Animal Destructor called." << std::endl;
}


void	Animal::makeSound()
{
	std::cout << "Animal sound./n" ;
}
