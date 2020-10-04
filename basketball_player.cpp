#include <iostream>
#include "basketball_player.hpp"

BasketballPlayer::BasketballPlayer(std::string name, std::string team, std::string position, int number):Player(name,team,number){
    name_ = name;
    team_ = team;
    number_ = number;

}

std::string BasketballPlayer::getPOSITION() const{
    return position_;
}

double BasketballPlayer::getWINS() const{
    return win_shares;
}

double BasketballPlayer::getMINUTES() const{
    return minutes_per_game;
}