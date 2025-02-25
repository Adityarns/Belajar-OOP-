#ifndef __WEAPON
#define __WEAPON
#include <string>
#include <iostream>

class Weapon{
    private:
        std::string name;
        double attackPower;

    public:
        Weapon(const char* name, double attackPower){
            this->name = name;
            this->attackPower = attackPower;
        }
        void display(){
            std::cout << "Senjata\t: " << this->name << std::endl;
            std::cout << "Power\t: " << this->attackPower << std::endl;
        }

};



#endif
