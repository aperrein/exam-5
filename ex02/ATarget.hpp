/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:39:06 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 14:39:08 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
protected:
        std::string         _type;

public:
        ATarget(std::string t);
        virtual ~ATarget();
        ATarget(ATarget const & copy);
        ATarget &        operator=(ATarget const & rhs);

        std::string const &         getType(void) const;

        virtual ATarget*     clone(void) const = 0;
        void                getHitBySpell(ASpell const & s) const;
};

#endif
