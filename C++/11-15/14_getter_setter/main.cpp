#include <iostream>
#include <string>
#include "player.hpp"

using namespace std;

int main(){
    player player1 = player("Hira");
    player1.showDisplay();
    player1.addExp(30);
    player1.showDisplay();
    player1.addExp(100);
    player1.showDisplay();
    player1.addExp(35);
    player1.showDisplay();
    player1.addExp(95);
    player1.showDisplay();
    return 0;
}