/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:48:49 by raitmous          #+#    #+#             */
/*   Updated: 2023/12/01 12:09:48 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }

int main (int argc, char **argv)
{
	Span sp = Span(argc);

	try {
		for (int i = 1; argv[i]; i++)
		{
			sp.addNumber(atoi(argv[i]));
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(1337);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	Span span = Span(100);
	try {
		int arr[] = {0, -5, -88, -13, -1373, 13, 1373, 1337, 2, 99, 4};
		std::vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));		
		span.addNumber(8794);
		//std::cout << span.shortestSpan() << std::endl;
		//std::cout << sp.longestSpan() << std::endl;

		span.addNumbers(vec);
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}