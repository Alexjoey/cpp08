/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:41:39 by amylle            #+#    #+#             */
/*   Updated: 2025/04/25 14:12:50 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span():_N(0)
{
	std::cout << "Default Span constructed\n";
}

Span::Span(unsigned int N): _N(N)
{
	std::cout << "Span constructed with max size of: " << N << std::endl;
}

Span::Span(const Span& other): _N(other._N), _nums(other._nums) {}
Span::~Span() {}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_N = other._N;
		_nums = other._nums;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_nums.size() >= _N)
		throw FullContainerException();
	_nums.push_back(num);
	std::cout << "added " << num << " to span\n";
}
int	Span::shortestSpan() const
{
	if (_nums.size() < 2)
		throw NotEnoughMembersException();
	std::vector<int> tmp = _nums;
	std::sort(tmp.begin(), tmp.end());
	int shortestSpan;
	shortestSpan = tmp[1] - tmp[0];
	for (size_t i = 1; i < tmp.size(); i++)
	{
		if (tmp[i] - tmp[i - 1] < shortestSpan)
			shortestSpan = tmp[i] - tmp[i - 1];
	}
	return (shortestSpan);
}

int Span::longestSpan() const
{
	if (_nums.size() < 2)
		throw NotEnoughMembersException();
	std::vector<int> tmp = _nums;
	std::sort(tmp.begin(), tmp.end());
	int longestSpan = *(tmp.end() - 1) - *tmp.begin();
	return (longestSpan);
}


const char *Span::FullContainerException::what() const throw()
{
	return ("Container is full");
}

const char *Span::NotEnoughMembersException::what() const throw()
{
	return ("Not enough members in Span");
}
