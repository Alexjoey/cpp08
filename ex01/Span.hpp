/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:43:37 by amylle            #+#    #+#             */
/*   Updated: 2025/04/25 14:10:58 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
public:
	Span();
	Span(unsigned int N);
	Span(const Span& other);
	~Span();

	Span	&operator=(const Span& other);

	int		shortestSpan() const;
	int		longestSpan() const;
	void	addNumber(int num);
	template<typename Iterator>
	void	addNumber(Iterator begin, Iterator end)
	{
		if (_nums.size() + std::distance(begin, end) > _N)
			throw FullContainerException();
		std::cout << "Added iterator with nums: ";
		for (Iterator tmp = begin; tmp != end; tmp++)
			std::cout << " " << *tmp;
		std::cout << " to Span\n";
		_nums.insert(_nums.end(), begin, end);
	}

	class FullContainerException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	
	class NotEnoughMembersException: public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

private:
	unsigned int		_N;
	std::vector<int>	_nums;
};
