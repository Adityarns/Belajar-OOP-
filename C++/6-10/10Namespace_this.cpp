#include <iostream>
#include <string>

using namespace std;

class classTypes{
    public:
        string dataStr;
        double dataDouble;

        classTypes(const char* dataStr, double dataDouble){
            // menggunakan namespace(::)
            // classTypes::dataStr = dataStr;

            //menggunakan this
            this->dataStr = dataStr;
            this->dataDouble = dataDouble;
        }
};

class player{
    public:
        string name;
        double power;

        player(const char* name, double power){
            this->setName(name);
            this->setPower(power);
        }


        void setName(const char* name){
            this->name = name;
        }
        void setPower(double power){
            this->power = power;      
        }

};

int main(){
    classTypes* object1 = new classTypes("Adit", 1246);
    cout << object1->dataStr << endl;
    cout << object1->dataDouble << endl;

    player* player1 = new player("Hira", 10000);
    cout << player1->name << endl;
    player1->setName("Ipin");
    cout << player1->name << endl;
    return 0;
}