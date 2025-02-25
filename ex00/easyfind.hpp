/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 18:00:06 by amylle            #+#    #+#             */
/*   Updated: 2025/02/25 18:06:30 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T& container, int target)
{
	typename T::iterator itr = std::find(container.begin(), container.end(), target);
	if (itr == container.end())
		throw std::exception();
	return (itr);
}
