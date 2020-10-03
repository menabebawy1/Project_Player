#include <iostream>
#include "basketball.hpp"

int main(){
    Player myplayer("Peter Parker", "Spurs", 0);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    std::cout << "Your player name is: " << myplayer.getNAME() << std::endl;
    std::cout << "Your player number is: " << myplayer.getNUM() << std::endl;
    myplayer.run(1000);
    myplayer.shoot(2000);
    std::cout << "Your player level is: " << myplayer.getLEVEL() << std::endl;
    myplayer.run(1000000);
    myplayer.summary();


}