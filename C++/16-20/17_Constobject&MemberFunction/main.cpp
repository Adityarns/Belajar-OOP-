#include <iostream>
#include <string>

using namespace std;

class Player{
    private: 
        string name;
    
    public:
        Player(const char* name){
            this->name = name;
        }

        //ditambahkan const agar dapat dipanggil
        void showDisplay() const {
            cout << "Nama: " << this->name << endl;
        }

        void setName(const char* name){
            this->name = name;
        }

        string getName() const {
            return this->name;
        }
};


int main(){
    Player player1 = Player("Upin");
    player1.showDisplay();

    const Player player2 = Player("Ipin");
    player2.showDisplay(); 

    const Player player3 = Player("Mail");
    // player3.setName("Jarjit");
    cout << "Nama: " << player3.getName() << endl;
    return 0;
}

//Kesimpulan

//1. Jika sudah di set sebagai const maka tidak dapat diubah
//2. Jika sebuah atribute memiliki tipe const/konstan maka hanya member
//   function yang const yang bisa dipanggil
//3. Jika objectnya tidak const maka semua member function bisa dipanggil
//