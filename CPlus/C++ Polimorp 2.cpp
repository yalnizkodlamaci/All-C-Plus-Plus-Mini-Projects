#include <string>
#include <iostream>
#include <vector>

using namespace std;

class User {
protected:
    string id;
    string name;
 
    virtual string getSalary() {return "0";}

public:
    // setter'lar
    void setId(const string &newId) { id = newId; }
    void setName(const string &newName) { name = newName; }

    // getter'lar
    string getId() { return id; }
    string getName() { return name; }
};

class Hademe : public User {

    public:

    string getSalary() override {return "40000";}
};

class Öğretmen : public User {

    public:

    string getSalary() override {return "50000";}
};

class Müdür : public User {

    public:

    string getSalary() override {return "100000";}
};



int main() {

    Hademe h;
    Öğretmen ö;
    Müdür m;

    cout << "Hademe :" << h.getSalary() << endl ;

    cout << "Öğretmen :" << ö.getSalary() << endl ;

    cout << "Müdür :" << m.getSalary() << endl;
    


}
