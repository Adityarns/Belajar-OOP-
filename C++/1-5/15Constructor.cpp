#include <iostream>
#include <string>

using namespace std;

// Class
class Mahasiswa{
    
    public:
        string Nama;
        string NIM;
        string Jurusan;
        int IPK;
        
    // konstruktor
    Mahasiswa(string Nama, string NIM, string Jurusan, int IPK){
        Mahasiswa::Nama = Nama;
        Mahasiswa::NIM = NIM;
        Mahasiswa::Jurusan = Jurusan;
        Mahasiswa::IPK = IPK;

        cout << "Nama: " << Nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "Jurusan: " << Jurusan << endl;
        cout << "IPK: " << IPK << endl;
    }
    // Methods
    // Tanpa Parameter dan Tanpa return
    void tampilkanData(){
        cout << "Nama: " << Nama << endl;
        cout << "NIM: " << NIM << endl;
        cout << "Jurusan: " << Jurusan << endl;
        cout << "IPK: " << IPK << endl;
    }

    // Dengan Parameter dan tanpa return anjay
    void ubahNama(string namaBaru){
        Mahasiswa::Nama = namaBaru;
    }

    // Tanpa Parameter dan dengan return
    string getNama(){
        return Mahasiswa::Nama;
    }

    // Dengan Parameter dan dengan Return
    double katrolIPK(const double &tambahanNilai){
        return Mahasiswa::IPK + tambahanNilai;
    }
};



int main(){
    Mahasiswa mahasiswa1 = Mahasiswa("Adit", "1247050069", "Teknik Informatika", 4.0);
    mahasiswa1.ubahNama("Ipul");
    mahasiswa1.tampilkanData();
    string dataNama = mahasiswa1.getNama();
    
    cout << "Nama sekarang: " << dataNama << endl;
    cout << "Nilai IPK sekarang: " << mahasiswa1.katrolIPK(3.45) <<  endl;


    return 0;
}