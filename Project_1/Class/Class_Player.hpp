#ifndef _Class_Player_HPP_
# define _Class_Player_HPP_

# include <iostream>

class Player
{
private:
	std::string Name;
	int			Ages;
	int			Best_Scores;
	int			Nb_Life;
public:
	Player();
	Player(std::string name, int age);
	~Player();

	std::string Get_Name() const;
	int Get_Ages() const;
	int Get_Best_Scores() const;
	int Get_Nb_Life() const;
};

#endif