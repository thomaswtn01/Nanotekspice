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
        Functions();
    virtual ~Functions();
    void Display();
    void dump() const;
    void simulate(size_t tick = 1);
    void create(std::unique_ptr<nts::IComponent> function, const std::string &name, const std::string &type);
    void initialize_component(const std::string &name, const std::string &type, std::shared_ptr<nts::IComponent> newfunction);
///Remplacement Icomponent
    virtual nts::Tristate compute(std::size_t pin);
    virtual void setLink(std::string namePinOne, size_t numberPinOne, std::string namePinTwo,
        size_t numberPinTwo);
    virtual void setLink(std::size_t pin, nts::IComponent &other, std::
    size_t otherPin);
    protected:
    std::map<std::string, std::shared_ptr<nts::IComponent>> _function;
    std::map<std::string, std::shared_ptr<nts::Input>> _inputs;
    std::map<std::string, std::shared_ptr<nts::Output>> _outputs; //penser a crrer les nts
    std::map<std::string, std::shared_ptr<nts::Clock>> _clocks;
    size_t _tick = 0;
    private:
};

#endif /* !FUNCTIONS_HPP_ */
