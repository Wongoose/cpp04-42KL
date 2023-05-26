/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:18 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:57:33 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal: Default constructor called" << std::endl;
	type_ = "Animal";
}

Animal::Animal(std::string type) {
	std::cout << "Animal: Type constructor called" << std::endl;
	type_ = type;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal: Copy constructor called" << std::endl;
	type_ = copy.get_type();
}

Animal::~Animal() { std::cout << "Animal: Default destructor called" << std::endl; }

void Animal::swap(Animal &first, Animal &second) {
	std::swap(first.type_, second.type_);
}

Animal &Animal::operator=(Animal other) {
	std::cout << "Animal: copy assignment operator called" << std::endl;
	Animal::swap(*this, other);
	return (*this);
}

std::string Animal::get_type() const { return (this->type_); }

void Animal::set_type(std::string type) { this->type_ = type; }

void Animal::makeSound() const {
	std::cout << this->type_ << " is making a SOUND" << std::endl;
}

