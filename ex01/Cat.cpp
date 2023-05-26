/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:20 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:39:25 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	type_ = "Cat";
	this->brain_ = new Brain();
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->type_ = copy.get_type();
	this->brain_ = new Brain(*copy.brain_);
}

Cat::~Cat() {
	std::cout << "Cat: Default destructor called" << std::endl;
	delete this->brain_;
}

void Cat::swap(Cat &first, Cat &second) {
	std::swap(first.type_, second.type_);
}

Cat &Cat::operator=(Cat other) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	Cat::swap(*this, other);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->type_ << " is MEOWING: MEOOOWWWWW!" << std::endl;
}