/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:08:52 by amylle            #+#    #+#             */
/*   Updated: 2025/04/25 15:11:30 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>

template <typename T>
class	MutantStack: public std::stack<T>
{
public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	//stack is a wrapper around deque, just enforcing last in first out
	//were just accessing the container and using their iterator
	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}

	const_iterator begin() const
	{
		return (std::stack<T>::c.begin());
	}

	const_iterator end() const
	{
		return (std::stack<T>::c.end());
	}

	reverse_iterator rbegin()
	{
		return (std::stack<T>::c.rbegin());
	}

	reverse_iterator rend()
	{
		return (std::stack<T>::c.rend());
	}

	const_reverse_iterator rbegin() const
	{
		return (std::stack<T>::c.rbegin());
	}

	const_reverse_iterator rend() const
	{
		return (std::stack<T>::c.rend());
	}
};
