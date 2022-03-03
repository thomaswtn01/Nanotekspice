/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Functions
*/

#include <memory>
#include <map>
#include <string>
#include <iostream>
#include "Icomponent.hpp"
#include "Component/Clock.hpp"
#include "Component/Input.hpp"
#include "Component/Output.hpp"

#ifndef FUNCTIONS_HPP_
#define FUNCTIONS_HPP_

class Functions : nts::IComponent{
    public:
        Functions() =default;
    virtual ~Functions();
    void Display();
    virtual void dump() const;
    void simulate(size_t tick = 1);
    void new_IN(std::string const &name, const std::string &number);
    virtual void new_LINK(std::string pin1_name, size_t pin1_number, std::string pin2_name, size_t pin2_number);
    void create(std::unique_ptr<nts::IComponent> function, const std::string &name, const std::string &type);
    void initialize_component(const std::string &name, const std::string &type, std::shared_ptr<nts::IComponent> newfunction);
///Remplacement Icomponent
    virtual nts::Tristate compute(std::size_t pin);
    virtual void setLink(std::size_t pin, nts::IComponent &pin2, std::
    size_t pin3);
    protected:
    std::map<std::string, std::shared_ptr<nts::IComponent>> _function;
    std::map<std::string, std::shared_ptr<nts::Input>> _inputs;
    std::map<std::string, std::shared_ptr<nts::Output>> _outputs; //penser a crrer les nts
    std::map<std::string, std::shared_ptr<nts::Clock>> _clocks;
    size_t _tick = 0;
    private:
};

#endif /* !FUNCTIONS_HPP_ */
