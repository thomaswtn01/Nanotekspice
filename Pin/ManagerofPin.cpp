/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** ManagerofPin
*/

#include "ManagerofPin.hpp"
#include "Pin_out.hpp"
#include "Pin_in.hpp"
#include <string>
#include <iostream>
#include <functional>
#include <ostream>


void nts::ManagerofPin::PinIN_add(IComponent *function, size_t pin)
{
    if(function == NULL)
        throw std::runtime_error("add pin pas la");
    _pins[pin] = std::make_unique<Pin_in>(function, pin);
}

void nts::ManagerofPin::PinOUT_add(IComponent *function, size_t pin)
{
    if(function == NULL)
        throw std::runtime_error("add pin pas la");
    _pins[pin] = std::make_unique<Pin_out>(function, pin);
}




//compute manager



nts::Tristate nts::ManagerofPin::compute(std::size_t pin)
{
    if(_pins.find(pin) == _pins.end()) {
        throw std::runtime_error("add pin pas la");
    }
    return _pins[pin]->compute();
}

nts::Tristate nts::ManagerofPin::compute(nts::ManagerofPin::IN name, size_t pin)
{
    if(_pins.find(pin) == _pins.end())
        throw std::runtime_error("add pin pas la");
    return (name(_pins[pin]->compute()));

}

nts::Tristate nts::ManagerofPin::compute(nts::ManagerofPin::ININ name, size_t pin, size_t pin2)
{
    if(_pins.find(pin) == _pins.end())
        throw std::runtime_error("add pin pas la");
    if(_pins.find(pin2) == _pins.end())
        throw std::runtime_error("add pin pas la");
    return(name(_pins[pin]->compute(), _pins[pin2]->compute()));
}


///////////////////lien/////////////////

void nts::ManagerofPin::setLink(size_t pin, nts::IComponent &other, size_t otherPin)
{
    if(_pins.find(pin) == _pins.end())
        throw std::runtime_error("add pin pas la");
    _pins[pin]->create_link(other, otherPin);
}

bool nts::ManagerofPin::is_pin_linked(size_t name) const
{
    if((_pins.find(name) != _pins.end()))
        return((_pins.find(name))->second->is_pin_linked());
    return(false);
}

void nts::ManagerofPin::restart()
{
 //faire restart
}

void nts::ManagerofPin::dump() const
{
    for (auto &pin : _pins) //on attribut
        pin.second->dump();
}
