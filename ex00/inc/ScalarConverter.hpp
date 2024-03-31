/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:53:58 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 15:47:43 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# define YELLOW "\033[33m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define BLUE "\033[34m"
# define RST "\033[0m"

#include <string>
#include <iostream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>

class ScalarConverter {
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &);
	~ScalarConverter();
	ScalarConverter&	operator=(const ScalarConverter &);

	void static convert(std::string);
};
