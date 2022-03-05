/*
** EPITECH PROJECT, 2022
** Nanotekspice
** File description:
** porte_4001
*/

#include "../Icomponent.hpp"
#include "../Porte.hpp"
#include "../Pin/ManagerofPin.hpp"

#ifndef PORTE_4001_HPP_
#define PORTE_4001_HPP_

namespace nts
{
    class porte_4001 : public IComponent
    {
    public:
        porte_4001(std::string const &number);

        void simulate(std::size_t tick) override;
        Tristate compute(std::size_t pin = 1) override;
        void setLink(std::size_t pin, IComponent &other, std::size_t
        otherPin) override;
        void dump() const override;

        ManagerofPin pin_of;
    private:
    };

}


#endif /* !PORTE_4001_HPP_ */
