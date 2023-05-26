/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:57:21 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 17:37:54 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"

class Cat : public Animal {
	public:
		// Constructors
		Cat();
		Cat(const Cat &copy);

		// Destructors
		~Cat();

		// Operators
		Cat &operator=(Cat other);
		void swap(Cat &first, Cat &second);

		// Functions
		void makeSound() const;

	private:
		Brain *brain_;
};

#endif