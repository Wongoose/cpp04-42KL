/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:44:48 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:45:02 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>
#include <iomanip>

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class Brain {
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Destructor
		~Brain();

		// Operators
		Brain &operator=(Brain other);
		void swap(Brain &first, Brain &second);

		// Getters
		std::string get_idea(unsigned int index) const;

		// Setters
		void set_idea(unsigned int index, std::string idea);

		// Functions

	protected:
		std::string *ideas_;
};
#endif