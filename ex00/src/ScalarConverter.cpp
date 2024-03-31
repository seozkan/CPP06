/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 11:54:13 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 16:07:06 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {;}
ScalarConverter::ScalarConverter(const ScalarConverter &src) {(void) src;}
ScalarConverter::~ScalarConverter() {;}

ScalarConverter&	ScalarConverter::operator=(const ScalarConverter &src) {
	(void) src;
	return (*this);
}

typedef std::string::iterator strit;

bool static getdouble(std::string s, double &d) {
	bool digit = false;
	
	strit it = s.begin();
	if (*it == '+' || *it == '-') ++it;
	while (it != s.end()) {
		if (*it == '.') ++it;
		else if (*it >= '0' && *it <= '9') digit = true;
		else if (*it == 'f' && (it + 1) == s.end()) break;
		else {
			digit = false;
			break;
		}
		++it;
	}
	if (digit || s == "inf" || s == "inff" || s == "-inf" || s == "-inff" || s == "nan" || s == "nanf") {
		d = strtod(s.c_str(), 0);
		return false;
	}
	if (s.length() == 1) {
		d = static_cast<double>(s.at(0));
		return false;
	}
	return true;
}

void static printchar(double d) {
	std::cout << "char: ";
	if (d > std::numeric_limits<char>::max() || d < std::numeric_limits<char>::min() || std::isnan(d))
		std::cout << "impossible\n";
	else if (d >= 128 || d < 32)
		std::cout << "Non displayable\n";
	else
		std::cout << '\'' << static_cast<char>(d) << '\'' << std::endl;
}

void static printint(double d) {
	std::cout << "int: ";
	if (d > std::numeric_limits<int>::max() || d < std::numeric_limits<int>::min() || std::isnan(d))
		std::cout << "impossible\n";
	else
		std::cout << static_cast<int>(d) << std::endl;
}

void ScalarConverter::convert(std::string s) {
	double d;
	if (getdouble(s, d)) {
		std::cout << s << " : not a valid literal\n";
		return;
	}
	printchar(d);
	printint(d);
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
