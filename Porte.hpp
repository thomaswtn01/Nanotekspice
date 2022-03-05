/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** Porte
*/

#include "Icomponent.hpp"
#ifndef PORTE_HPP_
#define PORTE_HPP_

class Porte {
    public:
        Porte();
    nts::Tristate AND(nts::Tristate one, nts::Tristate two);
    nts::Tristate NOR(nts::Tristate one, nts::Tristate two);
    nts::Tristate OR(nts::Tristate one, nts::Tristate two);
    protected:
    private:
};

#endif /* !PORTE_HPP_ */
