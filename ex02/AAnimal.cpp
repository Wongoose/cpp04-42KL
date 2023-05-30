/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:18 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:44:43 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "AAnimal: Default constructor called" << std::endl;
	type_ = "AAnimal";
}

AAnimal::AAnimal(std::string type) {
	std::cout << "AAnimal: Type constructor called" << std::endl;
	type_ = type;
}

AAnimal::AAnimal(const AAnimal &copy) {
	std::cout << "AAnimal: Copy constructor called" << std::endl;
	type_ = copy.get_type();
}

AAnimal::~AAnimal() { std::cout << "AAnimal: Default destructor called" << std::endl; }

// swap is removed

AAnimal &AAnimal::operator=(const AAnimal &other) {
	std::cout << "AAnimal: copy assignment operator called" << std::endl;
	this->type_ = other.type_;
	return (*this);
}

std::string AAnimal::get_type() const { return (this->type_); }

void AAnimal::set_type(std::string type) { this->type_ = type; }

void AAnimal::makeSound() const {
	std::cout << this->type_ << " is making a SOUND" << std::endl;
}

