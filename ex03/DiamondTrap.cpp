/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:30 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/10 16:07:23 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*-------------------- Orthodox --------------------*/

DiamondTrap::DiamondTrap()
{
	this->name = "Guest42";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "DiamondTrap Parameterize constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& other)
{
	if (&other != this)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	}
	return (*this);
}

DiamondTrap::DiamondTrap(DiamondTrap& other)
{
	*this = other;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->name << ", and my ClapTrap name is " << ClapTrap::name << std::endl;
}