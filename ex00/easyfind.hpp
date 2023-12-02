/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:19:45 by raitmous          #+#    #+#             */
/*   Updated: 2023/12/02 19:38:21 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
int easyfind(T& container, int value)
{
   typename T::iterator t = find (container.begin(), container.end(), value);

	if (t == container.end())
		throw std::runtime_error("Value not found");
	return *t;
}

#endif