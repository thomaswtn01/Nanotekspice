/*
** EPITECH PROJECT, 2022
** B-OOP-400-STG-4-1-tekspice-matteo.murgolo
** File description:
** Terminal
*/

#include "Terminal.hpp"

Terminal::Terminal(std::string data = "", std::string fichier ="")
{
	int prompt = 1;
	std::string command;
	std:: fstream my_file;

	my_file.open(fichier, std::ios::in);
	if (!my_file) {
		std::cout << "No such file";
	}
	else {
		while (1) {
		std::cout << "> ";
		std::getline (std::cin,command);
		if (command == "exit")
			break;
		else if (command == "display")
			display();
		else if (command == "simulate")
			simulate();
		else if (command == "loop")
			loop();
		else if (command == "dump")
			dump();
		command = "";
		// if (command == "display")
		// 	change_value();

	}
	my_file.close();
}
}

std::string Terminal::display()
{
	std::cout << "test display\n";
	return("");
}

std::string Terminal::simulate()
{
	std::cout << "test simulate\n";
	return("");
}

std::string Terminal::loop()
{
	std::cout << "test loop\n";
	return("");
}

std::string Terminal::dump()
{

}

int Terminal::change_value()
{

}

Terminal::~Terminal()
{

}