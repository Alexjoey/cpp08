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
#include <list>
#include <exception>

// Test helper function to check if exceptions are thrown correctly
void testExceptionHandling()
{
    std::cout << "Testing Exception Handling..." << std::endl;
    Span sp(3); // Span with capacity of 3 elements

    try {
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40); // Should throw exception
    }
    catch (const Span::FullContainerException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}

void testAddSingleNumber()
{
    std::cout << "Testing Adding a Single Number..." << std::endl;
    Span sp(5);
    sp.addNumber(10);
    sp.addNumber(20);
    
    std::cout << std::endl;
}

void testAddIteratorRange()
{
    std::cout << "Testing Adding a Range of Numbers using Iterators..." << std::endl;
    Span sp(100);

    std::vector<int> numbers;
	for (int i = 0; i < 100; i++)
		numbers.push_back(rand());
    sp.addNumber(numbers.begin(), numbers.end());

	std::cout << std::endl;
}

void testShortestAndLongestSpan()
{
    std::cout << "Testing Shortest and Longest Span..." << std::endl;
    Span sp(5);
    
    sp.addNumber(10);
    sp.addNumber(20);
    sp.addNumber(30);
    sp.addNumber(50);
    sp.addNumber(100);
    
    try {
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    }
    catch (const Span::NotEnoughMembersException& e) {
        std::cout << "Caught exception: " << e.what() << std::endl;
    }
}

int main()
{
    try {
        testExceptionHandling();
        testAddSingleNumber();
        testAddIteratorRange();
        testShortestAndLongestSpan();
    }
    catch (const std::exception& e) {
        std::cout << "Test failed: " << e.what() << std::endl;
    }

    return 0;
}

