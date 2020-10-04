#include <iostream>
#include "player.hpp"
#include <math.h>

    Player::Player(std::string name, std::string team, int number){
        name_ = name;
        team_ = team;
        number_ = number;
        level_ = 0;
        fitness_ = 0;
        ppg_ = 0;
    }

    std::string Player::getNAME() const{
        return name_;
    }
    std::string Player::getTEAM() const{
        return team_;
    } 
    double Player::getPPG() const{
        return ppg_;
    } 
    int Player::getNUM() const{
        return number_;
    }
    int Player::getLEVEL() const{
        return level_;
    } //returns player level
    double Player::getFITNESS() const{
        return fitness_;
    }//returs player distance
    void Player::updateTEAM(std::string new_team){
        team_ = new_team;
        std::cout << "Your player has been traded to the " << team_ << " !" << std::endl;
    } // updates if the player changes team
    void Player::run(double miles){
        old_level = level_;
        if(((fitness_ + miles/50) < 100) && ((level_ + floor(miles/50)) < 100)){
            fitness_ += miles/50;
            level_ += floor(miles/50);
        }
        else{
            fitness_ += 0;
            level_ += 0;
        }
        new_level = level_;
        congrats();
    }
    void Player::score(int shots){
        old_level = level_;
        if(((level_ + floor(shots/1000)) < 100) && ((ppg_ + shots/1000) < 100)){
            level_ += floor(shots/1000);
            ppg_ += shots/1000;

        }
        else{
            level_ += 0;
            ppg_ += 0;
        }
        new_level = level_;
        congrats();
    } // increases player ppg and level

    void Player::congrats(){
        int difference = 0;
        if(new_level > old_level){
            difference = new_level - old_level;
            std::cout << "CONGRATULATIONS, you have reached level " << level_ << "!!!" << std::endl;
            
        }
        else{
            std::cout << "Keep going! you can level up!" << std::endl;
        }
    }
    void Player::summary(){
        std::cout << name_ << " is one of the best players in NBA history. Throughout his career, he has scored " << ppg_ << " points per game. He retired with the " << team_ << " as number " << number_ << "." << std::endl;
        std::cout << "The following are his stats:" << std::endl;
        std::cout << "Points Per Game: " << ppg_ << std::endl;
        std::cout << "Fitness: " << fitness_ << std::endl;
        std::cout << "Level: " << level_ << std::endl;


    }