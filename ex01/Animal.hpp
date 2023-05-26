/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:19 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:59:08 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
#include <iomanip>

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class Animal {
	public:
		// Constructors
		Animal();
		Animal(std::string type);
		Animal(const Animal &copy);
		
		// Destructor
		virtual ~Animal();

		// Operators
		Animal &operator=(Animal other);
		void swap(Animal &first, Animal &second);

		// Getters
		std::string get_type() const;

		// Setters
		void set_type(std::string type);

		// Functions
		virtual void makeSound() const;
		// virtual means can be defined in derived class, can work without defining in Animal.cpp

	protected:
		std::string type_;
};

#endif