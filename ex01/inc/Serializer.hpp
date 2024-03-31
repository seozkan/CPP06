/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:21:44 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 17:28:22 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>

typedef struct s_Data {
	int num;
} Data;

class Serializer {
	public:
		Serializer();
		Serializer(const Serializer &);
		virtual ~Serializer();
		Serializer&	operator=(const Serializer &);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};