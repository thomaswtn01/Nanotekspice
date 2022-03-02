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
        ~Pin_out() =default;
        void simulate(std::size_t tick) override;
        Tristate compute() override;
            Tristate compute(size_t pin) override final;
        virtual void setLink(size_t pin, IComponent &other, size_t otherPin)  final;
        void dump() const override ;
    void create_link(IComponent &pin, size_t pin2) override;
    void restart();
    protected:
    private:
};
}

#endif /* !PIN_OUT_HPP_ */
