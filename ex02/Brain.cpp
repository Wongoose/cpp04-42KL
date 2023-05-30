/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:44:47 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:45:02 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain: Default constructor called" << std::endl;
	ideas_ = new std::string[100];
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain: Copy constructor called" << std::endl;
	if (!copy.ideas_) return;
	this->ideas_ = new std::string[100];
	for (int i = 0; i < 100; i++) {
		this->ideas_[i] = copy.ideas_[i];
	}
}

Brain::~Brain() { std::cout << "Brain: Default destructor called" << std::endl; }

void Brain::swap(Brain &first, Brain &second) {
	std::swap(first.ideas_, second.ideas_);
}

Brain &Brain::operator=(Brain other) {
	std::cout << "Brain: copy assignment operator called" << std::endl;
	Brain::swap(*this, other);
	return (*this);
}

std::string Brain::get_idea(unsigned int index) const {
	if (index > 99) {
		std::cout << "Invalid index is out or idea range! Can't get idea." << std::endl;
		return ("");
	}
	return (this->ideas_[index]);
}

void Brain::set_idea(unsigned int index, std::string idea) {
	if (index > 99) {
		std::cout << "Invalid index is out or idea range! Can't set a new idea." << std::endl;
		return;
	}
	this->ideas_[index] = idea;
}