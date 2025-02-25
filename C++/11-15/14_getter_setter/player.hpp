#ifndef __PLAYER
#define __PLAYER
#include <iostream>
#include <string>
using namespace std;

class player{
    private:
        // Atribute
        string name;
        int level;
        int exp;
        int power;


    public:
        player(const char* name){
            this->name = name;
            this->exp = 0;
            this->level = 1;
            this->power = 100;
        }

        void showDisplay(){
            cout << "Name\t: " << this->name << endl;
            cout << "Exp\t: " << this->exp << endl;
            cout << "Level\t: " << this->level << endl;
            cout << "Power\t: " << this->power << endl;
            cout << "----------------------" << endl;
        }
        
        //  Getter
        string getName(){   // merubah atribute menjadi hanya dapat dilihat
            return this->name;
        }

        //  Setter
        void addExp(int jumlahExp){     // Merubah atribute menjadi dapat diubah/write
            int maxExp = 100;
            this->exp += jumlahExp;
            if(this->exp > maxExp){
                this->level++;
                this->power += 100;
                cout << "level up" << endl;
                this->exp -= maxExp;
            }
        }
};

#endif