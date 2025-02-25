#ifndef __PLAYER
#define __PLAYER
#include <string>
#include <iostream>

class Player{
    private:
        std::string name;
        
    public:
        Player(const char* name){
            this->name = name;
        }

        void display(){
            std::cout << "Nama\t: " << this->name << std::endl;
        }
    
};
#endif
