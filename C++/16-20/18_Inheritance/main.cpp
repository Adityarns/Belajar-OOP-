#include <iostream>
using namespace std;

// Kelas Induk
class Animal {
public:
    void eat() { cout << "Animal is eating." << endl; }
protected:
    void sleep() { cout << "Animal is sleeping." << endl; }
private:
    void breathe() { cout << "Animal is breathing." << endl; }
};

// 1. Public Inheritance
class DogPublic : public Animal {
public:
    void display() {
        eat();      // OK, karena public tetap public
        sleep();    // OK, karena protected tetap protected
        // breathe();  // Error: private tidak bisa diakses
    }
};

// 2. Protected Inheritance
class DogProtected : protected Animal {
public:
    void display() {
        eat();      // OK, karena public berubah menjadi protected
        sleep();    // OK, karena protected tetap protected
        // breathe();  // Error: private tidak bisa diakses
    }
};

// 3. Private Inheritance
class DogPrivate : private Animal {
public:
    void display() {
        eat();      // OK, karena public berubah menjadi private
        sleep();    // OK, karena protected berubah menjadi private
        // breathe();  // Error: private tidak bisa diakses
    }
};

int main() {
    DogPublic dog1;
    dog1.eat();    // OK, karena public inheritance mempertahankan eat() sebagai public

    DogProtected dog2;
    // dog2.eat(); // Error, eat() berubah menjadi protected

    DogPrivate dog3;
    // dog3.eat(); // Error, eat() berubah menjadi private

    return 0;
}
