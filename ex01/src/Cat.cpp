#include "Cat.hpp"

// default constructor
Cat::Cat(): Animal("Cat")
{
	_brain = new Brain();
	std::cout << "\t" << GRN << "Cat default constructor" << RST << std::endl;
}

// copy constructor
Cat::Cat(const Cat& other): Animal(other._type)
{
	_brain = new Brain(*other._brain);
	if (!other._brain)
		_brain = NULL;
	std::cout << "\t" << "Cat Copy constructor" << std::endl;
}

// copy assignment operator overload
Cat&	Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		delete _brain;
		_type =  other._type;
		_brain = new Brain(*other._brain);
		if (!other._brain)
			_brain = NULL;
	}
	std::cout << "\t" << "Copy assignement operator called" << std::endl;
	return (*this);
}

// destructor
Cat::~Cat()
{
	delete _brain;
	std::cout << "\t" << RED <<"Cat Destructor called" << RST << std::endl;
}

std::string	Cat::getIdea() const
{
	return(_brain->getIdea());
}

// cat sound member
void	Cat::makeSound() const
{
	std::cout << "\t" << "Make sound called: " << std::endl << "\t";
	std::cout << "\t" << "The Cat says: nyan nyan nyan nyan nyan nyan nyan nyan nyan nyan" << std::endl;
}
