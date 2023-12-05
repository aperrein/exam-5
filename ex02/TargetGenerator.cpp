/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:52 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 15:36:53 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
    auto    it = _tb.begin();
    while (it != _tb.end())
    {
        delete it->second;
        it = _tb.erase(it);
    }
}

TargetGenerator::TargetGenerator(TargetGenerator const & copy)
{
    *this = copy;
}

TargetGenerator &         TargetGenerator::operator=(TargetGenerator const & rhs)
{
    this->_tb = rhs._tb;
    return (*this);
}

void            TargetGenerator::learnTargetType(ATarget *t)
{
    if (t)
    {
        if (_tb.find(t->getType()) == _tb.end())
            _tb[t->getType()] = t->clone();
    }
}

void        TargetGenerator::forgetTargetType(std::string const & t)
{
    if (_tb.find(t) != _tb.end())
    {
        delete _tb.find(t)->second;
        _tb.erase(_tb.find(t));
    }
}

ATarget *           TargetGenerator::createTarget(std::string const & t)
{
    ATarget      *tmp = 0;
    if (_tb.find(t) != _tb.end())
        tmp = _tb[t];
    return (tmp);
}
