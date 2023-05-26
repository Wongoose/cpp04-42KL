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

int main(void) {
	std::cout << std::endl << "--- PDF: ---" << std::endl << std::endl;
	Dog *dog = new Dog();
	Cat *cat = new Cat();

	delete dog;
	delete cat;

	std::cout << std::endl
			<< GREEN << "--- Array of animals ---" << std::endl
			<< std::endl;

	Animal *array_animals[10];
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
	// NEXT: Testing deep copy
}