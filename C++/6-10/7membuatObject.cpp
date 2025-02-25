#include <iostream>
#include <string>

using namespace std;

class denganCostructor {
    public:
        string data;

        denganCostructor(const char* data){
            denganCostructor::data = data;
        }

        void show(){
            cout << "ini " << denganCostructor::data << endl;
        }
};

class tanpaConstructor {
    public: 
        string data;

        void show(){
            cout << "ini " << tanpaConstructor::data << endl;
        }
};


int main(){
    // 1. Membuat object tanpa constructor
    tanpaConstructor object1;
    object1.data = "object 1";
    object1.show();

    // 2. Membuat object dengan constructor
    denganCostructor object2 = denganCostructor("object 2");
    object2.show();

    // 3. Cara Lain membuat object dengan constructor di cpp
    denganCostructor object3("object 3");
    object3.show();

    // 4. Membuat object dengan heap memory
    denganCostructor* object4 = new denganCostructor("object 4");
    (*object4).show(); // dengan cara dereference
    object4->show(); // arrow operator. mapping function atau atribut
    string data = object4->data; 
    cout << data << endl;

    // Error menggunakan cara 2, cara 2 baru bisa dijalankan apabila langsung di deklarasikan isinya
    // denganCostructor object5;
    // object5 = denganCostructor("object 5");

    // Jika menggunakan cara 4, baru bisa jika ingin di deklarasikan terlebih dahulu
    denganCostructor* object6;
    object6 = new denganCostructor("object 6");
    object6->show();

    return 0;
}