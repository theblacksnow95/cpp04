#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"

class WrongCat: public WrongAnimal
{
	private:
		Brain		*_brain;
	public:
		WrongCat();
		WrongCat(const WrongCat& other);
		WrongCat&	operator=(const WrongCat& other);
		~WrongCat();

		void	makeSound() const;
		std::string	getIdea() const;
};

#endif
