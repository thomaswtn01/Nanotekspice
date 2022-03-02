/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** False
*/

#include "Component/Input.hpp"

namespace nts
{
    class False : public Input
    {
    public:
        False();
        void dump() const override;
        void new_number(Tristate value) override;
    };
}