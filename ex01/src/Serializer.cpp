/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:22:10 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 17:26:42 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {;}
Serializer::Serializer(const Serializer &src) {(void) src;}
Serializer::~Serializer() {;}

Serializer&	Serializer::operator=(const Serializer &src) {
	(void) src;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t> (ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*> (raw);
}