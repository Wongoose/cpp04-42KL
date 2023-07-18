/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:29 by zwong             #+#    #+#             */
/*   Updated: 2023/07/18 11:03:19 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGWrongAnimal_H
#define WRONGWrongAnimal_H

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

// Wrong because destructor and functions is not virtual (hence derived class cannot override definition)
class WrongAnimal {
	public:
		// Constructors
		WrongAnimal();
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &copy);
		
		// Destructor
		~WrongAnimal();

		// Operators
		WrongAnimal &operator=(WrongAnimal other);
		void swap(WrongAnimal &first, WrongAnimal &second);

		// Getters
		std::string get_type() const;

		// Setters
		void set_type(std::string type);

		// Functions
		void makeSound() const;
		// virtual means can be defined in derived class, can work without defining in WrongAnimal.cpp

	protected:
		std::string type_;
};

#endif