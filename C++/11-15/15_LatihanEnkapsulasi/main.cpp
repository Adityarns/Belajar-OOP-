#include <iostream>
#include <string>
#include "player.hpp"
#include "weapon.hpp"

using namespace std;

int main(){
    Player userName = Player("Hira");
    Weapon Senjata = Weapon("M416", 1000);    
    userName.display();
    Senjata.display();


    return 0;
}