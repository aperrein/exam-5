/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:07:21 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/20 10:07:23 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string n, std::string t): _name(n), _title(t)
{
    std::cout << this->_name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->_name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(Warlock const & copy)
{
    *this = copy;
}

Warlock &           Warlock::operator=(Warlock const & rhs)
{
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return (*this);
}

std::string const &         Warlock::getName() const
{
    return (_name);
}

std::string const &         Warlock::getTitle() const
{
    return(_title);
}

void                        Warlock::setTitle(std::string const & t)
{
    this->_title = t;
}

void                        Warlock::introduce() const
{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;
}