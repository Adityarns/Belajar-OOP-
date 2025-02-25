#include <iostream>
#include <string>
#include <chrono>

using namespace std;
// using Clock = chrono::steady_clock;
using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;

class Kosong {
    public: 
        int data(){ // 1 byte
            return 1;
        }
};

class Isi {
    public:
    //contoh atribute
        int data1; // 4 byte
        int data2; // 4 byte 
        double double1; // 8 byte
        string str; // 32 byte

};

class Mahasiswa{
    public:
        string nama;

        Mahasiswa(const char* nama){
            Mahasiswa::nama = nama;
        }
};

int main(){
    //Besaran memori untuk sebuah object bergantung pada atributnya
    //syntax untuk menampilkan besaran memori dari suatu class pada cpp
    cout << "Alokasi class Kosong: " << sizeof(Kosong) << " Byte" << endl;
    cout << "Alokasi class Isi: " << sizeof(Isi) <<" Byte" << endl;

    //Address
    string a;
    string b;
    Mahasiswa object1 = Mahasiswa("Adit"); // masuknya ke stack
    Mahasiswa* object2 = new Mahasiswa("Hira"); // masuknya ke heap
    string c;
    string d;

    cout << "\nAddress Stack" << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << &object1 << endl;
    cout << &object2 << endl;
    cout << object2 << endl;
    cout << &c << endl;
    cout << &d << endl;

    //Perbandingan seberapa cepat membuat object di masing-masing memori
    // intinya pembuatan object pada stack lebih cepat dari pada heap
    // tetapi stack itu terbatas sehingga terkadang disebut stack overflow sementara heap lebih besar/luas ukurannya
    TimePoint *tStackStart = new TimePoint();
    TimePoint *tStackEnd = new TimePoint();
    TimePoint *tHeapStart = new TimePoint();
    TimePoint *tHeapEnd = new TimePoint();

    *tStackStart = Clock::now();
    Mahasiswa object3 = Mahasiswa("Adit"); 
    *tStackEnd = Clock::now();
    
    // cin.get();
    *tHeapStart = Clock::now();
    Mahasiswa* object4 = new Mahasiswa("Hira"); 
    *tHeapEnd = Clock::now();

    chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    cout << "Waktu pembuatan object pada stack: " << durasi.count() << endl;
    durasi = *tHeapEnd - *tHeapStart;
    cout << "Wa ktu pembuatan object pada Heap: " << durasi.count() << endl;
    return 0;
}