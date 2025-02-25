#include <iostream>
#include <string>
#include "player.hpp"
using namespace std;


int main(){
    player* player1 = new player("Ammara");
    player1->display();

    cout << "get name: " << player1->getName() << endl;

    player1->changeName("Sahira");
    player1->display();
    return 0;
}

