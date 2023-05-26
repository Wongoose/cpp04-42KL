/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:24 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:36:27 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class Dog : public Animal {
	public:
		// Constructors
		Dog();
		Dog(const Dog &copy);

		// Destructors
		~Dog();

		// Operators
		Dog &operator=(Dog other);
		void swap(Dog &first, Dog &second);

		// Functions
		void makeSound() const;
	
	private:
		Brain *brain_;
};

#endif