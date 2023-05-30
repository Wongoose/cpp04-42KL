/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:30 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 16:57:33 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat: Default constructor called" << std::endl;
	type_ = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	type_ = copy.get_type();
}

WrongCat::~WrongCat() { std::cout << "WrongCat: Default destructor called" << std::endl; }

void WrongCat::swap(WrongCat &first, WrongCat &second) {
	std::swap(first.type_, second.type_);
}

WrongCat &WrongCat::operator=(WrongCat other) {
	std::cout << "WrongCat: copy assignment operator called" << std::endl;
	WrongCat::swap(*this, other);
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << this->type_ << " is WRONG MEOWING: aueidnaiuednaeiudn!" << std::endl;
}