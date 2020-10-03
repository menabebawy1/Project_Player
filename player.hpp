#ifndef PLAYER_
#define PLAYER_

class Player
{
public:
    Player(std::string name, std::string team, int number); //constructor for new player
    std::string getNAME() const; //returns player name
    std::string getTEAM() const; //returns player team
    double getPPG() const; //returns player points per game
    int getNUM() const; //returns player number
    int getLEVEL() const; //returns player level
    double getFITNESS() const; //returs player distance
    void updateTEAM(std::string new_team); // updates if the player changes team
    void run(double miles); // increeases player fitness and level
    void shoot(int shots); // increases player ppg and level
    void summary(); //gets players info
    

private:
    void congrats(); //Notifies the player thet they have leveled up! helper function!
    std::string name_;
    std::string team_;
    int number_;
    double fitness_; //starts at 0
    int level_; //starts at 0
    double ppg_; //staarts at 0
    int old_level;
    int new_level;
    
};

#endif