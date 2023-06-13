/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sciftci <sciftci@student.42kocaeli.com.tr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:13:50 by sciftci           #+#    #+#             */
/*   Updated: 2023/06/10 21:13:55 by sciftci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
    _count = 0;
    for (size_t i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    std::cout << "Default constructor is called of MateriaSource" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    _count = copy._count;
    this->~MateriaSource();
    for (size_t i = 0; i < 4; i++)
        this->_materia[i] = (copy._materia[i]) ? copy._materia[i]->clone() : NULL;
    std::cout << "Copy constructor is called of MateriaSource" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign)
{
    _count = assign._count;
    this->~MateriaSource();
    for (size_t i = 0; i < 4; i++)
        this->_materia[i] = assign._materia[i] ? assign._materia[i]->clone() : NULL;
    std::cout << "Assign operator is called of MateriaSource" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (size_t i = 0; i < 4; i++)
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    std::cout << "Destructor is called of MateriaSource" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (this->_count == 4)
    {
        std::cout << "Inventory is full!" << std::endl;
        return;
    }
    this->_materia[this->_count] = m->clone();
    this->_count++;
    std::cout << "Learned Materia: " << m->getType() << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_materia[i] && this->_materia[i]->getType() == type)
        {
            std::cout << "Created Materia: " << this->_materia[i]->getType() << std::endl;
            return (this->_materia[i]->clone());
        }
    }
    std::cout << "Don't Know Materia: " << type << std::endl;
    return (NULL);
}
