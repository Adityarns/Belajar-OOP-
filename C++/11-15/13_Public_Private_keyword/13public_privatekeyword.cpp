#include <iostream>
#include <string>
#include "mahasiswa.hpp"

using namespace std;

int main(){
    Mahasiswa* mahasiswa1 = new Mahasiswa("upin");
    cout << mahasiswa1->namaPublic << endl;

    Mahasiswa* mahasiswa2 = new Mahasiswa("Hira");
    mahasiswa2->show();
    return 0;
}