#include "Class_Player.hpp"
# include <iostream>

Player::Player() : Name("Random"), Ages(18), Best_Scores(0), Nb_Life(5)
{
}

Player::Player(std::string name, int age) : Name(name), Ages(age), Best_Scores(0), Nb_Life(5)
{
}

Player::~Player()
{
}

std::string Player::Get_Name() const {return (this->Name);}

int Player::Get_Ages() const {return (this->Ages);}

int Player::Get_Best_Scores() const {return (this->Best_Scores);}

int Player::Get_Nb_Life() const {return (this->Nb_Life);}
