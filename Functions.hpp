/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Functions
*/

#include <memory>
#include <map>
#include <string>
#include "Icomponent.hpp"
#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

class Functions : nts::IComponent{
    public:
        Functions() = default;
    virtual ~Functions();
    void Display();
    void dump() const;
    void simulate(size_t tick = 1);

///Remplacement Icomponent
    virtual nts::Tristate compute(std::size_t pin);
    virtual void setLink(std::string namePinOne, size_t numberPinOne, std::string namePinTwo,
        size_t numberPinTwo);
    virtual void setLink(std::size_t pin, nts::IComponent &other, std::
    size_t otherPin);
    protected:
    size_t _tick = 0;
    private:
};

#endif /* !FUNCTIONS_HPP_ */
