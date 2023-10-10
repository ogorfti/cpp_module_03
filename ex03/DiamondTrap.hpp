/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:32:01 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/10 15:51:34 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
	public:

		DiamondTrap();
		DiamondTrap(std::string newName);
		DiamondTrap& operator=(DiamondTrap& other);
		DiamondTrap(DiamondTrap& other);
		~DiamondTrap();

		void whoAmI();
};

#endif