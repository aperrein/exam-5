/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:27 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 15:36:28 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook()
{}

SpellBook::~SpellBook()
{
    auto    it = _sp.begin();
    while (it != _sp.end())
    {
        delete it->second;
        it = _sp.erase(it);
    }
}

SpellBook::SpellBook(SpellBook const & copy)
{
    *this = copy;
}

SpellBook &         SpellBook::operator=(SpellBook const & rhs)
{
    this->_sp = rhs._sp;
    return (*this);
}

void            SpellBook::learnSpell(ASpell *s)
{
    if (s)
    {
        if (_sp.find(s->getName()) == _sp.end())
            _sp[s->getName()] = s->clone();
    }
}

void        SpellBook::forgetSpell(std::string const & s)
{
    if (_sp.find(s) != _sp.end())
    {
        delete _sp.find(s)->second;
        _sp.erase(_sp.find(s));
    }
}

ASpell *           SpellBook::createSpell(std::string const & s)
{
    ASpell      *tmp = 0;
    if (_sp.find(s) != _sp.end())
        tmp = _sp[s];
    return (tmp);
}