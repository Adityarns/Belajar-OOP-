#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
        string nama;

        Player(const char* nama){
            Player::nama = nama;
            cout << "Player " << Player::nama << " Dibuat" << endl;
        }

        //destructor (Menghapus setelah muncul)
        ~Player(){
            cout << "Player " << Player::nama << " Dihapus" << endl;
        }
};

void membuatPlayerStack(){
    Player stackPlayer = Player("Stack");
}

void membuatPlayerHeap(){
    //destructor pada heap harus di inisialisasi dengan delete
        Player* heapPlayer = new Player("Heap");
        delete heapPlayer;
}

void membuatPlayerStackPointer(Player* &playerPointer){
    Player stackPlayer = Player("Stack");
    playerPointer = &stackPlayer;
}

void membuatPlayerHeapPointer(Player* &playerPointer){
    Player* heapPlayer = new Player("Heap");
    playerPointer = heapPlayer;
    delete heapPlayer;
}
int main (){
    membuatPlayerStack();
    membuatPlayerHeap();

    //Simulasi membuat leak
    cout << "\nMemori Leak" << endl;
    Player* playerPoint1;
    Player* playerPoint2;
    membuatPlayerStackPointer(playerPoint1);
    membuatPlayerHeapPointer(playerPoint2);
    cout << playerPoint1 << endl;
    cout << playerPoint2 << endl;
    return 0; 
}