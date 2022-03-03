/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** True
*/

#ifndef TRUE_HPP_
#define TRUE_HPP_

#include "Input.hpp"

namespace nts
{
    class True : public Input
    {
    public:
        True();
        void dump() const override;
        void new_number(Tristate value) override;
    };
}

#endif /* !TRUE_HPP_ */
