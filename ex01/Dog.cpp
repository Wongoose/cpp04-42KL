/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:22 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:41:21 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type_ = "Dog";
	this->brain_ = new Brain();
}

Dog::Dog(const Dog &copy) {
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->type_ = copy.get_type();
	this->brain_ = new Brain(*copy.brain_);
}

Dog::~Dog() {
	std::cout << "Dog: Default destructor called" << std::endl;
	delete this->brain_;
}

void Dog::swap(Dog &first, Dog &second) {
	std::swap(first.type_, second.type_);
}

Dog &Dog::operator=(Dog other) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	Dog::swap(*this, other);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << this->type_ << " is BARKING: WOOF WOOF!" << std::endl;
}