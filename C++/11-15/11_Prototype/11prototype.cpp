#include <iostream>
#include <string>

using namespace std;

class player{
    public:
        string name;
        //Prototype
        player(const char*);
        void display();
        string getName();
        void changeName(const char*);
};

int main(){
    player* player1 = new player("Ammara");
    player1->display();

    cout << "get name: " << player1->getName() << endl;

    player1->changeName("Sahira");
    player1->display();
    return 0;
}

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