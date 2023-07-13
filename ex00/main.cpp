/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:25 by zwong             #+#    #+#             */
/*   Updated: 2023/07/13 13:54:57 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void) {
	std::cout << YELLOW
				<< "--- Project pdf: derived class overrides base class method ---"
				<< std::endl
				<< std::endl;
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	std::cout << "Hi I am " << i->get_type() << " " << std::endl;
	std::cout << "Hi I am " << j->get_type() << " " << std::endl;
	i->makeSound();  // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << std::endl
				<< GREEN << "--- Objects are created as derived class ---"
				<< std::endl
				<< std::endl;
	const Animal *meta2 = new Animal();
	const Cat *i2 = new Cat();
	const Dog *j2 = new Dog();
	std::cout << "Hi I am " << i2->get_type() << " " << std::endl;
	std::cout << "Hi I am " << j2->get_type() << " " << std::endl;
	i2->makeSound();  // will output the cat sound!
	j2->makeSound();
	meta2->makeSound();
	delete meta2;
	delete i2;
	delete j2;

	std::cout << std::endl
            << RED
            << "--- WrongAnimal Test: derived class doesn't override base "
               "class function ---"
            << std::endl
            << std::endl;
	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();
	std::cout << "Hi I am " << wrongAnimal->get_type() << " " << std::endl;
	std::cout << "Hi I am " << wrongCat->get_type() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();  // makes WrongAnimal sound because makeSound in WrongAnimal
						// is not virtual
	delete wrongAnimal;
	delete wrongCat;  // also, only calls one destructor, because destructor of
				// WrongAnimal is not virtual

	return (0);
}