/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:28 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:57:33 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
	type_ = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "WrongAnimal: Type constructor called" << std::endl;
	type_ = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	type_ = copy.get_type();
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal: Default destructor called" << std::endl; }

void WrongAnimal::swap(WrongAnimal &first, WrongAnimal &second) {
	std::swap(first.type_, second.type_);
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal other) {
	std::cout << "WrongAnimal: copy assignment operator called" << std::endl;
	WrongAnimal::swap(*this, other);
	return (*this);
}

std::string WrongAnimal::get_type() const { return (this->type_); }

void WrongAnimal::set_type(std::string type) { this->type_ = type; }

void WrongAnimal::makeSound() const {
	std::cout << this->type_ << " is making a WRONG ANIMAL SOUND" << std::endl;
}

