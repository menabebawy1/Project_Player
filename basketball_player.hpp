#ifndef BASKETBALL_PLAYER_
#define BASKETBALL_PLAYER_

#include "player.hpp" //you include the hpp file of the base class in the hpp of the derived class
//when you want to inherit a class

class BasketballPlayer: public Player
{
public:
    BasketballPlayer(std::string name, std::string team, std::string position, int number);
    std::string getPOSITION() const;
    double getWINS() const;
    double getMINUTES() const;

private:
    std::string position_;
    double win_shares;
    double minutes_per_game;
};

#endif