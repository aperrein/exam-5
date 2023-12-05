/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:38:50 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 14:38:51 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
protected:
        std::string         _name;
        std::string         _effects;

public:
        ASpell(std::string n, std::string e);
        virtual ~ASpell();
        ASpell(ASpell const & copy);
        ASpell &        operator=(ASpell const & rhs);

        std::string         getName(void) const;
        std::string         getEffects(void) const;

        virtual ASpell*     clone(void) const = 0;
        void                launch(ATarget const & t) const;
};

#endif