#ifndef BASKETBALL_
#define BASKETBALL_

class Player
{
public:
    Player(std::string name, std::string team, double ppg, int number); //constructor for new player
    std::string getNAME() const; //returns player name
    std::string getTEAM() const; //returns player team
    double getPPG() const; //returns player points per game
    int getNUM() const; //returns player number
    int getLEVEL() const; //returns player level
    double getDISTANCE() const; //returs player distance
    void updateTEAM(); // updates if the player changes team
    void updatePPG(); // updates if the player increases or decrease their points per game
    void run(); // increeases player fitness and level
    void shoot(); // increases player ppg and level

private:
    std::string name_;
    std::string team_;
    int number_;
    double fitness_; //starts at 0
    int level_; //starts at 0
    double ppg_;
    
};

#endif