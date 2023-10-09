/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:31:05 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/09 22:15:02 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*-------------------- Orthodox --------------------*/

FragTrap::FragTrap()
{
	this->name = "Guest42";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName)
{
	this->name = newName;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Parameterize constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap& other)
{
	if (&other != this)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
		std::cout << "FragTrap Copy assignment operator called" << std::endl;
	}
	return (*this);
}

FragTrap::FragTrap(FragTrap& other)
{
	*this = other;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

/*-------------------- Member functions --------------------*/

void FragTrap::highFivesGuys(void)
{
    std::cout << this->name << " requests a high five! Give me one, buddy!" << std::endl;
}
