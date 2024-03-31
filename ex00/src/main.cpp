/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:54:23 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 16:00:21 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <string>

int main(int ac, char **av) {
	if (ac < 2)	std::cout << "please provide a least 1 argument" << std::endl;
	for (int i = 1; i < ac; ++i) ScalarConverter::convert(std::string(av[i]));
	return (0);
}