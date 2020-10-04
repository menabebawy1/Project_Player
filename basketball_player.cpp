#include <iostream>
#include "basketball_player.hpp"

BasketballPlayer::BasketballPlayer(std::string name, std::string team, std::string position, int number):Player(name,team,number){
    name_ = name;
    team_ = team;
    number_ = number;
    position_ = position;
    level_ = 0;
    fitness_ = 0;
    ppg_ = 0;
    win_shares = 0;
    minutes_per_game = 0;

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

void BasketballPlayer::summary(){
    std::cout << name_ << " is one of the best players in NBA history. Throughout his career, he has scored " << ppg_ << " points per game. He retired with the " << team_ << " as number " << number_ << "." << std::endl;
    std::cout << "During his time there, he played as a " << position_ << ", averaging " << minutes_per_game << "minutes per game." << std::endl;
    std::cout << "He contributed to his team wins, having a " << win_shares << " of win shares per 48 minutes." << std::endl;
    std::cout << "The following are his stats:" << std::endl;
    std::cout << "Points Per Game: " << ppg_ << std::endl;
    std::cout << "Fitness: " << fitness_ << std::endl;
    std::cout << "Level: " << level_ << std::endl;
}