/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:20 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:57:33 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat: Default constructor called" << std::endl;
	type_ = "Cat";
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat: Copy constructor called" << std::endl;
	type_ = copy.get_type();
}

Cat::~Cat() { std::cout << "Cat: Default destructor called" << std::endl; }

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