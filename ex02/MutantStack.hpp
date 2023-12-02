/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:19:56 by raitmous          #+#    #+#             */
/*   Updated: 2023/12/02 19:30:44 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stack>
#include <list>
#include <vector>

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T, container>
{
    public:
        MutantStack(){}
        MutantStack(const MutantStack &other) {
            *this = other;
        }
		MutantStack& operator=(const MutantStack& other) {
			if (this != &other) {
				this->c = other.c;
			}
			return *this;
		}
		
        typedef typename container::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
		
        ~MutantStack(){}
};

#endif