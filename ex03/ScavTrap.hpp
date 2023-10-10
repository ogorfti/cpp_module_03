/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:38:43 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/10 15:33:03 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string newName);
		ScavTrap& operator=(ScavTrap& other);
		ScavTrap(ScavTrap& other);
		void attack(const std::string& target);
		void guardGate();
		~ScavTrap();
};

#endif