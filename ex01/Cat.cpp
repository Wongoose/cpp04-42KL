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
	std::swap(first.brain_, second.brain_);
}

Cat &Cat::operator=(Cat other) {
	std::cout << "Cat: copy assignment operator called" << std::endl;
	Cat::swap(*this, other);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << this->type_ << " is MEOWING: MEOOOWWWWW!" << std::endl;
}

void Cat::print_ideas(int num) const {

	std::cout << "Cat " << num << "'s" << " ideas:" << std::endl;	
	int i = 0;

	while (i < 100 && !this->brain_->get_idea(i).empty()) {
		std::cout << i << ": " << this->brain_->get_idea(i) << std::endl;
		i++;
	}
}

void Cat::set_idea(std::string idea) {
	int i = 0;

	while (i < 100 && !this->brain_->get_idea(i).empty())
		i++;

	if (i > 99) {
		std::cout << "Cat's brain is FULL! Can't set ideas." << std::endl;
		return;
	}
	this->brain_->set_idea(i, idea);
}
