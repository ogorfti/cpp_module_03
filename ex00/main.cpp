/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogorfti <ogorfti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:06:52 by ogorfti           #+#    #+#             */
/*   Updated: 2023/10/09 13:32:44 by ogorfti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("Gon");
	ClapTrap hxh;

	hxh = clap;
	hxh.attack("Neferpitou");
	hxh.attack("Neferpitou");
	hxh.beRepaired(50);
	hxh.takeDamage(20);
	hxh.takeDamage(20);
	hxh.takeDamage(20);
	hxh.takeDamage(20);
}
