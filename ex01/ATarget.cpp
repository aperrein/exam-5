/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:39:00 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 14:39:01 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string t): _type(t)
{

}

ATarget::~ATarget()
{}

ATarget::ATarget(ATarget const & copy)
{
    *this = copy;
}

ATarget &            ATarget::operator=(ATarget const & rhs)
{
    this->_type = rhs.getType();
    return (*this);
}

std::string const &         ATarget::getType() const
{
    return (this->_type);
}

void                    ATarget::getHitBySpell(ASpell const & s) const
{
    std::cout << this->getType() << " has been " << s.getEffects() << "!" << std::endl;
}