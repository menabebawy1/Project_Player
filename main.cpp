#include <iostream>
#include "basketball_player.hpp" //you only beed to include the hpp of the derived class in the main file

int main()
{
    std::cout << "Player 1: " << std::endl;
    std::cout << std::endl;

    Player myplayer("Peter Parker", "Spurs", 0);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    std::cout << "Your player name is: " << myplayer.getNAME() << std::endl;
    std::cout << "Your player number is: " << myplayer.getNUM() << std::endl;
    myplayer.run(1000);
    myplayer.score(2000);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    myplayer.run(10000);
    myplayer.summary();
    std::cout << std::endl;

    std::cout << "Player 2: " << std::endl;
    std::cout << std::endl;

    Player myplayer2("BOB", "Warriors", 100);
    std::cout << "Your player level is: " << myplayer2.getLEVEL() << std::endl;
    std::cout << "Your player fitness level is: " << myplayer2.getFITNESS() << std::endl;
    std::cout << "Your player ppg is: " << myplayer2.getPPG() << std::endl;
    myplayer2.run(50);
    myplayer2.run(50);
    myplayer2.score(15000);
    myplayer2.run(50);
    myplayer2.score(15000);
    myplayer2.run(50);
    std::cout << "Your player level is: " << myplayer2.getLEVEL() << std::endl;
    std::cout << "Your player fitness level is: " << myplayer2.getFITNESS() << std::endl;
    std::cout << "Your player ppg is: " << myplayer2.getPPG() << std::endl;
    myplayer2.summary();

    //_________________________________________________________________________
    //basketball_player.cpp testing
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Basketball Player: " << std::endl;
    std::cout << std::endl;

    BasketballPlayer player1("Marques Brownlee", "Huston Rockets", "Small Forward", 2);
    std::cout << "Name: " << player1.getNAME() << std::endl;
    std::cout << "Level: " << player1.getLEVEL() << std::endl;
    std::cout << "Minutes per game: " << player1.getMINUTES() << std::endl;
    std::cout << "Number: " << player1.getNUM() << std::endl;
    std::cout << "Position: " << player1.getPOSITION() << std::endl;
    std::cout << "Points per game: " << player1.getPPG() << std::endl;
    std::cout << "Team: " << player1.getTEAM() << std::endl;
    std::cout << "Wins per 48 minutes: " << player1.getWINS() << std::endl;
    player1.summary();

    /*
    std::string getNAME() const;                            //returns player name
    std::string getTEAM() const;                            //returns player team
    double getPPG() const;                                  //returns player points per game
    int getNUM() const;                                     //returns player number
    int getLEVEL() const;                                   //returns player level
    double getFITNESS() const;                              //returs player distance
    void updateTEAM(std::string new_team);                  // updates if the player changes team
    void run(double miles);                                 // increases player fitness and level
    void score(int shots);                                  // increases player ppg and level
    void summary(); 
    */



}