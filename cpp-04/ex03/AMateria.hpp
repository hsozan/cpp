/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:12:50 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/12 21:43:25 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "Character.hpp"
# include <string>

class AMateria
{
  protected:
	std::string _type;
	class Ice;
	class Cure;

  public:
	AMateria(void)
	{
	}
	AMateria(const std::string &type);
	AMateria(const AMateria &copy);
	AMateria &operator=(const AMateria &assign);
	virtual ~AMateria(void);

	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

class Ice : public AMateria
{
  public:
	Ice(void);
	Ice(const Ice &copy);
	Ice &operator=(const Ice &assign);
	~Ice();

	AMateria *clone() const;
	void use(ICharacter &target);
};

class Cure : public AMateria
{
  public:
	Cure(void);
	Cure(const Cure &copy);
	Cure &operator=(const Cure &assign);
	~Cure(void);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
