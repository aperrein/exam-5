/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:07:16 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/20 10:07:17 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
private:
        std::string     _name;
        std::string     _title;
        Warlock();
        Warlock(Warlock const & copy);
        Warlock & operator=(Warlock const & rhs);

public:
        Warlock(std::string n, std::string t);
        ~Warlock();
        std::string const &     getName() const;
        std::string const &     getTitle() const;
        void                    setTitle(std::string const & t);
        void                    introduce() const;
};

#endif
