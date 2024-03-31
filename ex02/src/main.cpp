/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seozkan < seozkan@student.42kocaeli.com.tr +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:50:26 by seozkan           #+#    #+#             */
/*   Updated: 2024/03/31 18:02:53 by seozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <ctime>

int main() {
	srand(time(0));

	for (int i = 0; i < 5; ++i) {
		Base * x = generate();
		identify(x);
		identify(*x);
		delete x;
	}
	return 0;
}