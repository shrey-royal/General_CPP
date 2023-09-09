#include<iostream>
using namespace std;

class GrandFather {
public:
    void GrandFatherProperty() {
        cout << "GrandFatherProperty" << endl;
    }
};

class Father : public GrandFather {
public:
    void FatherProperty() {
        cout << "FatherProperty" << endl;
    }
};

class Mother : public GrandFather {
public:
    void MotherProperty() {
        cout << "MotherProperty" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void ChildProperty() {
        cout << "ChildProperty" << endl;
    }
};

int main() {
    Child c;
    c.Mother::GrandFatherProperty();
    c.FatherProperty();
    c.MotherProperty();
    c.ChildProperty();
    return 0;
}