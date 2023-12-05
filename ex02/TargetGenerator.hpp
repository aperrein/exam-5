/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:36:57 by aperrein          #+#    #+#             */
/*   Updated: 2023/10/24 15:36:58 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <map>
# include "ATarget.hpp"

class TargetGenerator
{
private:
        std::map < std::string, ATarget* >       _tb;
        TargetGenerator(TargetGenerator const & copy);
        TargetGenerator &     operator=(TargetGenerator const & rhs);

public:
        TargetGenerator();
        ~TargetGenerator();

        void                    learnTargetType(ATarget *t);
        void                    forgetTargetType(std::string const & t);
        ATarget *                createTarget(std::string const & t);
        
};

#endif
