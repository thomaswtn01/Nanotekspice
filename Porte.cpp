/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** Porte
*/

#include "Porte.hpp"

Porte::Porte()
{
}

nts::Tristate AND(nts::Tristate one, nts::Tristate two)
{
    if(one == nts::TRUE && two == nts::TRUE)
        return (nts::TRUE);
    else if(one == nts::Tristate::FALSE || two == nts::Tristate::FALSE)
        return(nts::FALSE);
}

nts::Tristate OR(nts::Tristate one, nts::Tristate two)
{
    if(one == nts::TRUE || two == nts::TRUE)
        return (nts::TRUE);
    else if(one == nts::Tristate::FALSE && two == nts::Tristate::FALSE)
        return(nts::FALSE);
}

nts::Tristate NOR(nts::Tristate one, nts::Tristate two)
{
    return(OR(one, two));
}