/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** porte_4001
*/

#include "porte_4001.hpp"

nts::porte_4001::porte_4001(std::string const &number)
{
    pin_of.PinIN_add(this, 1);
    pin_of.PinIN_add(this, 2);
    pin_of.PinOUT_add(this, 3);
    pin_of.PinOUT_add(this, 4);
    pin_of.PinIN_add(this, 5);
    pin_of.PinIN_add(this, 6);
    pin_of.PinOUT_add(this, 7);
    pin_of.PinIN_add(this, 8);
    pin_of.PinIN_add(this, 9);
    pin_of.PinOUT_add(this, 10);
    pin_of.PinOUT_add(this, 11);
    pin_of.PinIN_add(this, 12);
    pin_of.PinIN_add(this, 13);
    pin_of.PinOUT_add(this, 14);
}

nts::Tristate nts::porte_4001::compute(std::size_t pin)
{
    if (pin == 0) {
        pin_of.restart();
    }

    // if (pin == 3)
    //     return pin_of.compute(NOR, 1, 2);
    // if (pin == 4)
    //     return pin_of.compute(NOR, 5, 6);
    // if (pin == 10)
    //     return pin_of.compute(NOR, 8, 9);
    // if (pin == 11)
    //     return pin_of.compute(NOR, 12, 13);
    return pin_of.compute(pin);
}

void nts::porte_4001::setLink(std::size_t pin, nts::IComponent &other,
                             std::size_t otherPin)
{
    pin_of.setLink(pin, other, otherPin);
}

void nts::porte_4001::dump() const
{
    std::cout << std::endl << "  -Type   :\tnor_4001" << std::endl << "  -Address:\t";

}

void nts::porte_4001::simulate(std::size_t tick)
{
}