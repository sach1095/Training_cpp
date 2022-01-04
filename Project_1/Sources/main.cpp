#include "../Includes/lib.hpp"
#include <iostream>
#include <string>
#include <deque>

bool	launcher(t_data *data)
{
	std::string buffer;

	std::cout << "Please enter the name of the Playeur : ";
	std::getline(std::cin, data->name_player); // gerer le multi entrer
	std::cout << "How old are you : ";
	std::getline(std::cin, buffer);
	data->age_player = std::stoi(buffer);
	std::cout << "check age = " << data->age_player << std::endl;
	if (data->age_player < 10)
	{
		std::cout << "Your are to Young." << std::endl;
		return EXIT_FAILURE;
	}
	else if (data->age_player <= 30)
		std::cout << "Pecfect!\nThe game Will Begin!" << std::endl;
	else
		std::cout << "Your are not litle old for playing game ?\nThe game Will Begin!" << std::endl;
	return 0;
}

int main()
{
	t_data data;
	init_struct(&data);
	std::cout << "Welcom to my game in cpp" << std::endl;

	if (launcher(&data))
		exit(EXIT_FAILURE);

	std::cout << "check afther launcher | name = " << data.name_player << "  | age = " << data.age_player << std::endl;
	return 0;
}