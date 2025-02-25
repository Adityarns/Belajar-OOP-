#include <iostream>
#include <string>

using namespace std;

class player{
    private:
        string name;
        double health;
        double power;
    
    public:
        //defaut assignment atau template dasar dari sebuah konstruktor jika tidak ada parameternya
        player(const char* name = "user", double health = 100, double power = 2000){
            this->name = name;
            this->health = health;
            this->power = power;
        }

        void display(){
            cout << "------------------------";
            cout << "\nNama\t : " << this->name << endl;
            cout << "Health\t : " << this->health << endl;
            cout << "Power\t : " << this->power << endl;
        }


};


int main(){
    player* user1 = new player();
    user1->display();
    player* user2 = new player("Miya", 80);
    user2->display();
    player* user3 = new player("Alucard", 5000);
    user3->display();
    player* user4 = new player("Layla", 50, 2500);
    user4->display();

    return 0;
}