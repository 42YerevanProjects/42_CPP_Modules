/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shovsepy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:45:24 by shovsepy          #+#    #+#             */
/*   Updated: 2022/02/01 19:47:38 by shovsepy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) {}

A::A(const A& other) { *this = other; }

A::~A(void) {}

A&	A::operator=(const A&) { return (*this); }
