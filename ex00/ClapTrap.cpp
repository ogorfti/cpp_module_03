/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:44:01 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/09 21:57:52 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*-------------------- Orthodox --------------------*/

ClapTrap::ClapTrap()
{
	this->name = "Guest42";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string newName)
{
	this->name = newName;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap Parameterize constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap& other)
{
	if (&other != this)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap& other)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " has taken " << amount << " hit points of damage" << std::endl;
		this->hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << " is Death" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap" << this->name << " has repaired itself, gaining  " << amount << " hit points" << std::endl;
		this->energyPoints -= 1;
		this->hitPoints += amount;
	}
}
