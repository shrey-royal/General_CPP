#include<iostream>
using namespace std;

class Father {
    string name;
    int noSanskar=0;
    string sanskar[5];

public:
    void setFatherName(string name) {
        this->name = name;
    }
    string getFatherName() {
        return name;
    }

    void setSanskar(string sanskar[], int noSanskar) {
        for(int i=0; i<noSanskar; i++) {
            this->sanskar[i] = sanskar[i];
        }
        this->noSanskar = noSanskar;
    }

    void displaySanskar() {
        cout << "Father's Sanskar: ";
        for (int i = 0; sanskar[i] != "" && i < noSanskar; i++) {
            cout << sanskar[i] << " ";
        }
        cout << endl;
    }
};

class Mother {
    string name;
    int noSanskar=0;
    string sanskar[5];
public:
    void setMotherName(string name) {
        this->name = name;
    }
    string getMotherName() {
        return name;
    }

    void setSanskar(string sanskar[], int noSanskar) {
        for(int i=0; i<noSanskar; i++) {
            this->sanskar[i] = sanskar[i];
        }
        this->noSanskar = noSanskar;
    }

    void displaySanskar() {
        cout << "Mother's Sanskar: ";
        for (int i = 0; sanskar[i] != "" && i < noSanskar; i++) {
            cout << sanskar[i] << " ";
        }
        cout << endl;
    }
};

class Child : public Father, public Mother {
    string name;
    string sanskar[5];
    int noSanskar=0;
public:
    void setChildName(string name) {
        this->name = name;
    }
    string getChildName() {
        return name;
    }

    void setSanskar(string sanskar[], int noSanskar) {
        for(int i=0; i<noSanskar; i++) {
            this->sanskar[i] = sanskar[i];
        }
        this->noSanskar = noSanskar;
    }

    void displaySanskar() {
        cout << "Child's Sanskar: ";
        for (int i = 0; sanskar[i] != "" && i < noSanskar; i++) {
            cout << sanskar[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Father father;
    father.setFatherName("Rameshbhai");
    string fatherSanskar[] = {"Kindness", "Discipline", "Honesty"};
    father.setSanskar(fatherSanskar, 3);

    Mother mother;
    mother.setMotherName("Savitaben");
    string motherSanskar[] = {"Kindness", "Forgiveness", "Patience", "Love"};
    mother.setSanskar(motherSanskar, 4);

    Child child;
    child.setChildName("Himanshu");
    string childSanskar[] = {"Greed", "Anger", "Pride", "Attachment", "Jealousy"};
    child.setSanskar(childSanskar, 5);

    cout << "Father's Name: " << father.getFatherName() << endl;
    father.displaySanskar();

    cout << "Mother's Name: " << mother.getMotherName() << endl;
    mother.displaySanskar();

    cout << "Child's Name: " << child.getChildName() << endl;
    child.displaySanskar();

    return 0;
}