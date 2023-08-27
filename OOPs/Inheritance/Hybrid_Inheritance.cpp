#include<iostream>
using namespace std;

class PrimeMinister {
    string name;
    string party;
    string work[100];
    int noWork=0;

public:
    void setPMName(string name) {
        this->name = name;
    }
    string getPMName() {
        return name;
    }

    void setParty(string party) {
        this->party = party;
    }
    string getParty() {
        return party;
    }

    void setWork(string work[], int noWork) {
        for(int i=0; i<noWork; i++) {
            this->work[i] = work[i];
        }
        this->noWork = noWork;
    }

    void displayWork() {
        cout << "Work done by PM: ";
        for (int i = 0; work[i] != "" && i < noWork; i++) {
            cout << work[i] << " ";
        }
        cout << endl;
    }
};

class HomeMinister: public PrimeMinister {
    string name;

public:
    void setMinisterName(string name) {
        this->name = name;
    }
    string getMinisterName() {
        return name;
    }
};

class DefenceMinister: public PrimeMinister {
    string name;

public:
    void setMinisterName(string name) {
        this->name = name;
    }
    string getMinisterName() {
        return name;
    }
};

class PoliceDepartment: public HomeMinister, public DefenceMinister {
    string deptName;

public:
    void setDeptName(string deptName) {
        this->deptName = deptName;
    }
    string getDeptName() {
        return deptName;
    }
};

int main() {
    PoliceDepartment policeDept;
    string work[100];
    int noWork;
    string name;

    cout << "Enter PM's name: ";
    getline(cin, name);

    policeDept.DefenceMinister::setPMName(name);
    cout << "Our Prime Minister's name is " << policeDept.DefenceMinister::getPMName();

    cout << "\nEnter PM's party: ";
    getline(cin, name);

    policeDept.HomeMinister::setParty(name);
    cout << "Our Prime Minister's party is " << policeDept.HomeMinister::getParty();

    cout << "\nEnter PM's work: ";
    cout << "\nPress X to stop\n";
    noWork = 0;
    do {
        getline(cin, work[noWork]);
        noWork++;
    } while(work[noWork-1] != "X");

    policeDept.DefenceMinister::setWork(work, noWork-1);
    cout << "Our Prime Minister's work: ";
    policeDept.DefenceMinister::displayWork();

    cout << "\nEnter Home Minister's name: ";
    getline(cin, name);

    policeDept.HomeMinister::setMinisterName(name);
    cout << "Our Home Minister's name is " << policeDept.HomeMinister::getMinisterName();

    cout << "\nEnter Home Minister's party: ";
    getline(cin, name);

    policeDept.HomeMinister::setParty(name);
    cout << "Our Home Minister's party is " << policeDept.HomeMinister::getParty();

    cout << "\nEnter Home Minister's work: ";
    cout << "\nPress X to stop\n";
    noWork = 0;
    do {
        getline(cin, work[noWork]);
        noWork++;
    } while(work[noWork-1] != "X");

    policeDept.HomeMinister::setWork(work, noWork-1);
    cout << "Our Home Minister's work: ";
    policeDept.HomeMinister::displayWork();

    cout << "\nEnter Defence Minister's name: ";
    getline(cin, name);

    policeDept.DefenceMinister::setMinisterName(name);
    cout << "Our Defence Minister's name is " << policeDept.DefenceMinister::getMinisterName();

    cout << "\nEnter Defence Minister's party: ";
    getline(cin, name);

    policeDept.DefenceMinister::setParty(name);
    cout << "Our Defence Minister's party is " << policeDept.DefenceMinister::getParty();

    cout << "\nEnter Defence Minister's work: ";
    cout << "\nPress X to stop\n";
    noWork = 0;
    do {
        getline(cin, work[noWork]);
        noWork++;
    } while(work[noWork-1] != "X");

    policeDept.DefenceMinister::setWork(work, noWork-1);
    cout << "Our Defence Minister's work: ";
    policeDept.DefenceMinister::displayWork();

    cout << "\nEnter Department's name: ";
    getline(cin, name);

    policeDept.setDeptName(name);
    cout << "Our Department's name is " << policeDept.getDeptName();
    
    return 0;
}

/*
1. Employee Hierarchy with Multiple Roles:
   Design a class hierarchy for employees in a company with multiple roles such as Manager, Developer, and Salesperson. Use hybrid inheritance to demonstrate how a base class like "Employee" can have derived classes for specific roles, and how another base class like "Project" can be used to represent the projects each employee is working on. Address the challenges of managing shared attributes and methods among the derived classes.

2. Geometric Shape Calculation with Mixin Classes:
   Create a program that deals with various geometric shapes like circles, rectangles, and triangles. Implement mixin classes that provide functionality like calculating area, perimeter, and other shape-specific operations. Use hybrid inheritance to combine these mixin classes and form specialized shape classes, showcasing the flexibility and reusability of mixin-based hybrid inheritance.

3. Game Character Development with Traits:
   Develop a game character system that employs hybrid inheritance to combine traits like combat abilities, magical skills, and stealth capabilities. Design a base class for the character and multiple classes for each trait. Demonstrate how hybrid inheritance can help create diverse character types while avoiding the diamond problem and ensuring a coherent character hierarchy.

4. Vehicle Manufacturing and Features:
   Construct a model for a vehicle manufacturing system. Use hybrid inheritance to represent different types of vehicles like cars, motorcycles, and trucks. Additionally, incorporate shared features like engines, transmissions, and braking systems using another set of base classes. Show how hybrid inheritance allows the creation of specialized vehicles with varying features while avoiding redundancy.

5. Educational Institute Staff and Departments:
   Build a program to manage the staff and departments of an educational institute. Use hybrid inheritance to create classes representing different types of staff members (teachers, administrators) and different departments (math, science, literature). Illustrate how hybrid inheritance can help manage both staff roles and departmental divisions effectively, while handling the complexity of shared attributes and behaviors.

*/