/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:22:31 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 17:47:56 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main() {
	Data d;
	d.num = 42;
	std::cout << "before " << &d << ' ' << d.num << std::endl;
	uintptr_t raw = Serializer::serialize(&d);
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "after  " << ptr << ' ' << ptr->num << std::endl;
	return 0;
}
