#include "Cat.hpp"

// default constructor
Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat default constructor" << std::endl;
}

// copy constructor
Cat::Cat(const Cat& other): Animal(other._type)
{
	std::cout << "Copy constructor" << std::endl;
}
// copy assignment operator overload
Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
		_type = other._type;
	std::cout << "Copy assignement operator called" << std::endl;
	
}

// destructor
Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

// cat sound member
void	makeSound()
{
	std::cout << "The Cat says: nyan nyan nyan nyan nyan" << std::endl;
}
