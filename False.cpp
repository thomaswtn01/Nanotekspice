/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** False
*/

#include "False.hpp"

nts::False::False() : Input("0")
{
    checkifgood();
}

void nts::False::new_number(nts::Tristate value)
{
    throw std::runtime_error("False component not setable!");
}

void nts::False::dump() const
{
    std::cout << std::endl << "  -Type   :\tFalse" << std::endl << "  -Address:\t";
    std::stringstream ss;
    ss << this;
    std::cout << ss.str();
    std::cout << " " << std::endl;
    std::cout << "  -Value  :\t" << _number << std::endl;
    std::cout << "  -Links  :" << std::endl;
    _pin_out.dump();
}