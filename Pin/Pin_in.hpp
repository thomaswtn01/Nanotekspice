/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin_in
*/

#include "Pin.hpp"

#ifndef PIN_IN_HPP_
#define PIN_IN_HPP_

namespace nts {
class Pin_in : virtual public Pin{
    public:
        Pin_in(IComponent *name, size_t number);
        ~Pin_in();

    void create_link(IComponent &pin, size_t pin2) override;
    Tristate compute() override;
    void restart();

    protected:
    nts::Tristate form;
    bool result;
    private:
};
}
#endif /* !PIN_IN_HPP_ */
