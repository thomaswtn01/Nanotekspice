/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** True
*/

#include "True.hpp"

nts::True::True() : Input("1")
{
    checkifgood();
}

void nts::True::dump() const
{
    std::cout << std::endl << "  -Type   :\tTrue" << std::endl << "  -Address:\t";
    std::stringstream ss;
    ss << this;
    std::cout << ss.str();
    std::cout << " " << std::endl;
    std::cout << "  -Value  :\t" << _number << std::endl;
    std::cout << "  -Links  :" << std::endl;
    _pin_out.dump();
}

void nts::True::new_number(nts::Tristate value)
{
    throw std::runtime_error("True component not setable!");
}