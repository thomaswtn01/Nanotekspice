/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** CreateComponent
*/

#include "CreateComponent.hpp"
#include "Component/Clock.hpp"
#include "Component/Input.hpp"
#include "Component/Output.hpp"
#include "Functions.hpp"
#include "Component/True.hpp"
#include "Component/False.hpp"


std::unique_ptr < nts::IComponent > CreateComponent::createComponent(const std::string &type, const std::string &name)
{
    static std::vector<std::string> names;

    for (std::string name : names) {
        if (type == name) {
            throw std::runtime_error("already taken");
            return nullptr;
        }
}
    names.push_back(name);
    if (type == "input")
        return (CreateComponent::createinput(name));
    if (type == "output")
        return (CreateComponent::createoutput(name));
    if (type == "true")
        return (CreateComponent::createtrue(name));
    if (type == "false")
        return (CreateComponent::createfalse(name));
    if (type == "clock")
        return (CreateComponent::createclock(name));
    if (type == "4001")
        return (CreateComponent::create4001(name));
    if (type == "4008")
        return (CreateComponent::create4008(name));
      if (type == "4011")
        return (CreateComponent::create4011(name));
    if (type == "4013")
        return (CreateComponent::create4013(name));
    if (type == "4017")
        return (CreateComponent::create4017(name));
    if (type == "4030")
        return (CreateComponent::create4030(name));
    if (type == "4069")
        return (CreateComponent::create4069(name));
    if (type == "4071")
        return (CreateComponent::create4071(name));
    if (type == "4081")
        return (CreateComponent::create4081(name));
    if (type == "4094")
        return (CreateComponent::create4094(name));
    if (type == "4514")
        return (CreateComponent::create4514(name));
    if (type == "4801")
        return (CreateComponent::create4801(name));
    if (type == "2716")
        return (CreateComponent::create2716(name));

    throw std::runtime_error("Can't create: " + type);
    return nullptr;
}


///////////Creation composant/////////////

std::unique_ptr<nts::IComponent> CreateComponent::createinput(const std::string &name) const noexcept
{
    return(std::unique_ptr<nts::IComponent>(new nts::Input(name)));
}

std::unique_ptr<nts::IComponent> CreateComponent::createoutput(const std::string &name) const noexcept
{
    return(std::unique_ptr<nts::IComponent>(new nts::Output()));
}

std::unique_ptr<nts::IComponent> CreateComponent::createtrue(const std::string &name) const noexcept
{
    return(std::unique_ptr<nts::IComponent>(new nts::True()));
}

std::unique_ptr<nts::IComponent> CreateComponent::createfalse(const std::string &name) const noexcept
{
    return(std::unique_ptr<nts::IComponent>(new nts::False()));
}

// nts::Tristate CreateComponent::compute(std::size_t pin)
// {
//     return nts::FALSE;
// }

CreateComponent::CreateComponent()
{
    createComponent(_type, _name);
}

CreateComponent::~CreateComponent()
{
}