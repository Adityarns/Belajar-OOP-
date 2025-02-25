#include <iostream>
#include <string>
#include "player.hpp"

using namespace std;
//memisahkan antara deklarasi dengan logicnya

player::player(const char* name){
    this->name = name;
}

void player::display(){
    cout << "Nama player: " << this->name << endl;   
}

string player::getName(){
   return this->name;
}

void player::changeName(const char* name){
    this->name = name;
}