/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:19 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:59:08 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_H
#define AAnimal_H

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

class AAnimal {
	public:
		// Constructors
		AAnimal();
		AAnimal(std::string type);
		AAnimal(const AAnimal &copy);
		
		// Destructor
		virtual ~AAnimal();

		// Operators
		AAnimal &operator=(const AAnimal &other); // changes here also

		// Getters
		std::string get_type() const;

		// Setters
		void set_type(std::string type);

		// Functions
		virtual void makeSound() const = 0; // "=0" makes it a pure virtual function (ABSTRACT class)
		// virtual means can be defined in derived class, can work without defining in AAnimal.cpp

	protected:
		std::string type_;
};

#endif