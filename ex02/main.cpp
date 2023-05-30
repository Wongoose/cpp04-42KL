/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:44:51 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:45:02 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// Learning objective is abstract class, pure virtual function
int main(void) {
	// Instantiating an animal doesn't work:
	// AAnimal *animal1 = new AAnimal();
	// AAnimal animal2 = AAnimal();

	std::cout << std::endl << "--- PDF: ---" << std::endl << std::endl;
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	delete dog;
	delete cat;

	std::cout << std::endl
			<< GREEN << "--- Array of animals ---" << std::endl
			<< std::endl;

	AAnimal *array_animals[10];
	for (int i = 0; i < 10; i++) {
		if (i % 2)
			array_animals[i] = new Dog();
		else
			array_animals[i] = new Cat();
	}
	std::cout << std::endl << YELLOW;

	for (int i = 0; i < 10; i++) array_animals[i]->makeSound();

	std::cout << std::endl << RED;

	for (int i = 0; i < 10; i++) delete array_animals[i];

	std::cout << std::endl << BLUE << "--- Test for deep copy ---" << std::endl << std::endl;

	Cat *cat2 = new Cat();
	cat2->set_idea("Hmm... fish!");
	cat2->set_idea("I wanna play...");
	cat2->print_ideas(2);

	std::cout << std::endl << MAGENTA << "--- Making a deep copy ---" << std::endl << std::endl;

	Cat *cat3 = new Cat(*cat2);
	cat2->set_idea("Gotta sleep now...");
	std::cout << std::endl;
	cat2->print_ideas(2);
	std::cout << std::endl;
	cat3->print_ideas(3);
	std::cout << std::endl;

	std::cout << std::endl << CYAN << "--- Copy assignment operator ---" << std::endl << std::endl;

	std::cout << "New Cat" << std::endl << std::endl;
	Cat *cat4 = new Cat();
	std::cout << std::endl <<"Assigning cat 3 to cat 4" << std::endl << std::endl;
	*cat4 = *cat3;
	std::cout << std::endl ;
	cat4->print_ideas(4);
	std::cout << std::endl;

	cat3->set_idea("No sleeping now!!!");
	cat3->print_ideas(3);
	std::cout << std::endl;
	cat4->print_ideas(4);
	std::cout << std::endl;

	std::cout << std::endl << DEFAULT << "--- Destruction ---" << std::endl << std::endl;

	delete cat2;
	delete cat3;
	delete cat4;
	return 0;
}