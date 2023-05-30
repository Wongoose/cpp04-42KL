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
	this->brain_ = new Brain(*copy.brain_); // this makes a deep copy, different pointers to memory
}

Dog::~Dog() {
	std::cout << "Dog: Default destructor called" << std::endl;
	delete this->brain_;
}

void Dog::swap(Dog &first, Dog &second) {
	std::swap(first.type_, second.type_);
	std::swap(first.brain_, second.brain_);
}

Dog &Dog::operator=(Dog other) {
	std::cout << "Dog: copy assignment operator called" << std::endl;
	Dog::swap(*this, other);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << this->type_ << " is BARKING: WOOF WOOF!" << std::endl;
}

void Dog::print_ideas(int num) const {

	std::cout << "Dog " << num << "'s" << " ideas:" << std::endl;

	int i = 0;

	while (i < 100 && !this->brain_->get_idea(i).empty()) {
		std::cout << i << ": " << this->brain_->get_idea(i) << std::endl;
		i++;
	}
}

void Dog::set_idea(std::string idea) {
	int i = 0;

	while (i < 100 && !this->brain_->get_idea(i).empty())
		i++;

	if (i > 99) {
		std::cout << "Dog's brain is FULL! Can't set ideas." << std::endl;
		return;
	}
	this->brain_->set_idea(i, idea);
}