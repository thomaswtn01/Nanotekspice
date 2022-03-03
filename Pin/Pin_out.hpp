/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin_out
*/

#ifndef PIN_OUT_HPP_
#define PIN_OUT_HPP_
#include <string>
#include "Pin.hpp"
namespace nts {
class Pin_out final
    : public Pin{
    public:


        Pin_out(IComponent *function, size_t name);
        ~Pin_out();
        Tristate compute() override;
    void create_link(IComponent &pin, size_t pin2) override;
    void restart() override;
    protected:
    private:
};
}

#endif /* !PIN_OUT_HPP_ */
