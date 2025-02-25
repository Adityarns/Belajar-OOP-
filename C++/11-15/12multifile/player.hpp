
#include <string>

class player{
    public:
        std::string name;
        //Prototype
        player(const char*);
        void display();
        std::string getName();
        void changeName(const char*);
};