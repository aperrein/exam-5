/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:33 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 15:36:34 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <map>
# include "ASpell.hpp"

class SpellBook
{
private:
        std::map < std::string, ASpell* >       _sp;
        SpellBook(SpellBook const & copy);
        SpellBook &     operator=(SpellBook const & rhs);

public:
        SpellBook();
        ~SpellBook();

        void                    learnSpell(ASpell *s);
        void                    forgetSpell(std::string const & s);
        ASpell *                createSpell(std::string const & s);
        
};

#endif
