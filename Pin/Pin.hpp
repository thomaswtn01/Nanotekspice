/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Pin
*/

#ifndef PIN_HPP_
#define PIN_HPP_
#include "../Icomponent.hpp"
#include <vector>
#include <search.h>
#include <string>
#include <iostream>
#include <utility>
#include <functional>
#include <sstream>

namespace nts {
class Pin : public IComponent{
    public:
        using Link = std::pair<std::reference_wrapper<IComponent>, size_t>;
        Pin(IComponent *function, size_t name);
        ~Pin();
        // Pin(Pin const &) = delete;
        // Pin(Pin &&) = default;

    //link pin function
    bool link_of_pin(IComponent &pin, size_t pin2) const;
    bool is_pin_linked();
    void function_dump_pin(); //const
    //other pin////
    virtual  void linked(IComponent &pin, size_t pin2) = 0 ;
    protected:
    size_t _pin;
    IComponent &_function;
    size_t _name;
    std::vector<Link> _link; //using link pair
    private:
};
}
#endif /* !PIN_HPP_ */
