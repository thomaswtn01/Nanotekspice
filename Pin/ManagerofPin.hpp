/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** ManagerofPin
*/

#ifndef MANAGEROFPIN_HPP_
#define MANAGEROFPIN_HPP_
#include <map>
#include <memory>
#include <Pin.hpp>

namespace nts{
class ManagerofPin {
    public:
    using IN = std::function<Tristate(Tristate)>;
    using ININ = std::function<Tristate(Tristate, Tristate)>;
        ManagerofPin() = default;
        ~ManagerofPin() = default;
    ManagerofPin(ManagerofPin &&)  = default;

    //Pin
    void PinIN_add(IComponent *function, size_t pin);
    void PinOUT_add(IComponent *function, size_t pin);

    //Compute pour les 3 cas ( 1 2 ou 3 pin)
    Tristate compute(std::size_t pin);
    Tristate compute(IN name, size_t pin);
    Tristate compute(ININ name, size_t pin, size_t pin2);

    //Icomponent function
    void setLink(size_t pin, IComponent &other, size_t otherPin);


    bool is_pin_linked(size_t pin) const;


    //Managing function
    void restart();
    void dump() const;
    protected:
    std::map<size_t , std::unique_ptr<Pin>> _pins;
    private:
};
}
#endif /* !MANAGEROFPIN_HPP_ */
