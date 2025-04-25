/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:09:47 by amylle            #+#    #+#             */
/*   Updated: 2025/04/25 15:11:33 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
int main()
{
    MutantStack<int> stack;

    // Push some elements onto the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    // Print elements using the forward iterator (begin and end)
    std::cout << "Forward iteration: ";
    for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Print elements using the reverse iterator (rbegin and rend)
    std::cout << "Reverse iteration: ";
    for (MutantStack<int>::reverse_iterator it = stack.rbegin(); it != stack.rend(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
