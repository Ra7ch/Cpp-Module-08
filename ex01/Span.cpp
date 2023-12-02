/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raitmous <raitmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:31:50 by raitmous          #+#    #+#             */
/*   Updated: 2023/12/01 11:52:12 by raitmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span (unsigned int n): N(n) {}
Span::Span () : N(0) {}

Span::Span(const Span& other) {
    N = other.N;
    vec = other.vec;
}

Span& Span::operator=(const Span& other) {
    if (this != &other) {
        N = other.N;
        vec = other.vec;
    }
    return (*this);
}

void Span::addNumber(int number) {
    if (vec.size() >= N) {
        throw std::out_of_range("Out of range : the capacity is full to the bream.");
    }
    vec.push_back(number);
}
void Span::addNumbers(const std::vector<int>& numbers) {
    if (vec.size() + numbers.size() >= N) {
        throw std::out_of_range("Out of range : too much numbers added at once, exceding the allocated capacity.");
    }
    vec.insert(vec.end(), numbers.begin(), numbers.end());
}

int Span::shortestSpan() const {
    if (vec.size() < 2) {
        throw std::runtime_error("What to do, ther isnt enough numbers to get the shortest span from.");
    }

    int shortest;
    std::vector<int> sortedVec;
    sortedVec = vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    shortest = sortedVec[1] - sortedVec[0];
    for (unsigned int i = 2;  i < sortedVec.size(); i++) {
        shortest = std::min(shortest, sortedVec[i] - sortedVec[i - 1]);
    }
    return shortest;
}

int Span::longestSpan() const {
    if (vec.size() < 2) {
        throw std::runtime_error("What to do, ther isnt enough numbers to get the largest span from.");
    }

    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());
    int largest = max - min;
    return (largest);
}

Span::~Span(){}