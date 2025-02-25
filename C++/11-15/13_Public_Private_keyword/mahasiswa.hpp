#ifndef __MAHASISWA
#define __MAHASISWA

#include <string>
#include <iostream>

class Mahasiswa{
    //Atribute
    public:
        std::string namaPublic;
    
    private:
        std::string namaPrivate;

    //constructor dan methods
    public: 
        Mahasiswa(const char* name){
            this->namaPublic = name;
            this->namaPrivate = name;
        }

        void show(){
            std::cout << "Nama mahasiswa: " << this->namaPrivate << std::endl;
        }
    
    private:
        void showPrivate(){
            std::cout << "Nama mahasiswa: " << this->namaPrivate << std::endl;
        }
};
#endif