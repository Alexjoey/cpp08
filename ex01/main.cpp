/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:13:00 by amylle            #+#    #+#             */
/*   Updated: 2025/04/25 14:17:49 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>
#include <exception>
#include <ctime>

// Test helper function to check if exceptions are thrown correctly
void testExceptionHandling()
{
    std::cout << "Testing Exception Handling..." << std::endl;
    Span sp(3); // Span with capacity of 3 elements

    try
	{
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40); // Should throw exception
    }
    catch (const std::exception &e)
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
	Span sp2(2);
	try
	{
		sp2.shortestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
	try
	{
		sp2.longestSpan();
	}
	catch (const std::exception &e)
	{
		std::cout << "Caught exception: " << e.what() << std::endl;
	}
}

void testAddIteratorRange()
{
    std::cout << "Testing Adding a Range of Numbers using Iterators..." << std::endl;
    Span sp(10001);

	srand(std::time(0));
    std::vector<int> numbers;
	for (int i = 0; i < 10000; i++)
		numbers.push_back(rand());
    sp.addNumber(numbers.begin(), numbers.end());

	std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
}

int main()
{
    try {
        testAddIteratorRange();
        testExceptionHandling();
    }
    catch (const std::exception& e) {
        std::cout << "Test failed: " << e.what() << std::endl;
    }

    return 0;
}
