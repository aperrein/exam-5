/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:38:45 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 14:38:46 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string n, std::string e): _name(n), _effects(e)
{

}

ASpell::~ASpell()
{}

ASpell::ASpell(ASpell const & copy)
{
    *this = copy;
}

ASpell &            ASpell::operator=(ASpell const & rhs)
{
    this->_name = rhs.getName();
    this->_effects = rhs.getEffects();
    return (*this);
}

std::string         ASpell::getName() const
{
    return (this->_name);
}

std::string         ASpell::getEffects() const
{
    return (this->_effects);
}

void                ASpell::launch(ATarget const & t) const
{
    t.getHitBySpell(*this);
}
