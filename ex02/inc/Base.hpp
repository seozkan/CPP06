/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:50:08 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 17:57:46 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cmath>
#include <iostream>

class Base {
public:
	virtual ~Base();
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate();
void identify(Base* p);
void identify(Base& p);