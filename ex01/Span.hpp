/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:04:16 by raitmous          #+#    #+#             */
/*   Updated: 2023/12/01 11:52:26 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private :
		std::vector<int> vec;
		unsigned int N;

	public :
		Span (unsigned int n);
		Span ();

		Span(const Span& other);
		
		Span& operator=(const Span& other);
		
		void addNumber(int number);
		void addNumbers(const std::vector<int>& numbers);

		int shortestSpan() const;

		int longestSpan() const;

		~Span();
};

#endif