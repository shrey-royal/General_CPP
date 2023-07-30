#include<iostream>
using namespace std;

class GEN_CPP {
    public:
    string college_name;
    string student_name;
    string branch;
    short sem;  //short is a data type which is used to store integers in the range of -32768 to 32767
    float cgpa;

    void ScanDetails(string, string, string, short, float);
    void PrintDetails();
};

void GEN_CPP::ScanDetails(string clg, string stu, string brnch, short s, float tka) {
    college_name = clg;
    student_name = stu;
    branch = brnch;
    sem = s;
    cgpa = tka;
}

void GEN_CPP::PrintDetails() {
    cout << "\nCollege Name: " << college_name << endl;
    cout << "Student Name: " << student_name << endl;
    cout << "Branch: " << branch << endl;
    cout << "Semester: " << sem << endl;
    cout << "CGPA: " << cgpa << endl;
}

int main() {
    GEN_CPP students[2];

    // g1.ScanDetails("IIITDM Kancheepuram", "Naimish", "Computer Science and Engineering", 3, 9.5);
    // g1.PrintDetails();

    for(int i=0; i<2; i++) {
        string clg, stu, brnch;
        short s;
        float tka;

        cout << "Enter College Name: ";
        getline(cin, clg);
        cout << "Enter Student Name: ";
        getline(cin, stu);
        cout << "Enter Branch: ";
        getline(cin, brnch);
        cout << "Enter Semester: ";
        cin >> s;
        cout << "Enter CGPA: ";
        cin >> tka;

        students[i].ScanDetails(clg, stu, brnch, s, tka);
        cin.ignore();
    }

    for(int i=0; i<2; i++) {
        students[i].PrintDetails();
        cout << endl;
    }

    return 0;
}