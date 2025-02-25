/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:06:34 by amylle            #+#    #+#             */
/*   Updated: 2025/02/25 18:08:09 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

void testVector()
{
    int arr[] = {2, 5, 2, 10};
    std::vector<int> v(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::vector<int>::iterator res;
    std::cout << "Testing std::vector:" << std::endl;

	for (std::vector<int>::iterator it = v.begin();it != v.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try 
	{
		std::cout << "Searching for 10: \n";
		res = easyfind(v, 10);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cout << "Element not found" << std::endl;
	}
	try
	{
		std::cout << "Searching for 7: \n";
		res = easyfind(v, 7);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
}

void testList()
{
    int arr[] = {1, 3, 5, 7};
    std::list<int> lst(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::list<int>::iterator res;
	std::cout << "Testing std::list:" << std::endl;
	for (std::list<int>::iterator it = lst.begin();it != lst.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try 
	{
		std::cout << "Searching for 10: \n";
		res = easyfind(lst, 10);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cout << "Element not found" << std::endl;
	}
	try
	{
		std::cout << "Searching for 7: \n";
		res = easyfind(lst, 7);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
}

void testDeque()
{
    int arr[] = {4, 8, 15, 16, 23, 42};
    std::deque<int> dq(arr, arr + sizeof(arr) / sizeof(arr[0]));
	std::deque<int>::iterator res;
	std::cout << "Testing std::deque:" << std::endl;
	for (std::deque<int>::iterator it = dq.begin();it != dq.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	try 
	{
		std::cout << "Searching for 10: \n";
		res = easyfind(dq, 10);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
        std::cout << "Element not found" << std::endl;
	}
	try
	{
		std::cout << "Searching for 7: \n";
		res = easyfind(dq, 7);
        std::cout << "Found: " << *res << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
}

int main()
{
    testVector();
    testList();
    testDeque();
    return 0;
}
