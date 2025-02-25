#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        // Konstruktor
        Mahasiswa(string nama, string NIM, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::NIM = NIM;
            Mahasiswa::jurusan = jurusan;
        }
        string stringify(){
            return "\n" + nama + " " + NIM + " " + jurusan;
        }
};

class DBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DBase(const char* fileName){
            DBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            // cout << data.nama << endl;
            // cout << data.NIM << endl;
            // cout << data.jurusan << endl;

            DBase::out.open(DBase::fileName,ios::app);
            DBase::out << data.stringify();
            DBase::out.close();
        }

        void showAll(){
            DBase::in.open(DBase::fileName,ios::app);
            string nama,NIM,jurusan;
            int index = 1;
            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> NIM;
                DBase::in >> jurusan;
                cout << index++ << "\t";
                cout << nama << "\t";
                cout << NIM << "\t";
                cout << jurusan << endl;
            }
            DBase::in.close();
        }
};

int main (){
    // User Input
    string nama,NIM,jurusan;
    cout << "--Masukkan data--" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> NIM;
    cout << "Jurusan: ";
    cin >> jurusan;

    // Membuat object-object yang diperlukan
    Mahasiswa datanama = Mahasiswa(nama, NIM, jurusan);
    DBase database = DBase("data.txt");
    // Save data
    database.save(datanama);
    database.showAll();

    return 0;
}