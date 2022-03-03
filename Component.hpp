/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** Component
*/

#ifndef COMPONENT_HPP_
#define COMPONENT_HPP_

#include "Icomponent.hpp"
#include <map>
#include <string>
#include <memory>

class Component : nts::IComponent
{
public:
    Component() = default;
    virtual ~Component() = default;
    virtual void simulate(std::size_t tick);
    virtual nts::Tristate compute(std::size_t pin);
    virtual void setLink(std::size_t pin, nts::IComponent &other, std::
    size_t otherPin);
    virtual void dump() const;
	int execute();
	void linkTo(IComponent* link_to);
};

#endif /* !COMPONENT_HPP_ */
