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

CreateComponent::CreateComponent()
{
}

std::unique_ptr < nts::IComponent > CreateComponent::createComponent(const std::string &type)
{

}

CreateComponent::~CreateComponent()
{
}


nts::Tristate CreateComponent::compute(std::size_t pin)
{
    return nts::FALSE;
}
