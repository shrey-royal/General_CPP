/*
Files in CPP: 

iostream -> istream(Object: cin) + ostream(Object: cout)

fstream -> ifstream(Object: fin) + ofstream(Object: fout)


Types of files:
text files -> .txt, .cpp, .java, .py
binary files -> .jpg, .mp3, .mp4, .exe

to create or open a file: 
ifstream fin("filename.txt", ios::in);
ofstream fout("filename.txt", ios::out);


parameter 1: filename
parameter 2: mode (ios::in, ios::out , ios::app, ios::trunc, ios::ate, ios::binary)


ios::in -> open file for reading
ios::out -> open file for writing
ios::app -> append to the end of the file
ios::trunc -> delete the contents of the file
ios::ate -> open the file and move to the end of the file
ios::binary -> open the file in binary mode

menu driven program to create, read, write, append, delete a file

Menu:

1. Create a file
2. Read a file
3. Write to a file
4. Append to a file
5. Delete a file
6. Exit

*/


#include<iostream>
#include<fstream>
#include<string>   
using namespace std;

void createFile(const string& filename) {
    ofstream file(filename);
    
    if(file.is_open()) {
        cout << "File '" << filename << "' created successfully." << endl;
        file.close();
    } else {
        cerr << "Error: Unable to create file." << endl;
    }
}

void readFile(const string& filename) {
    ifstream file(filename);

    if(file.is_open()) {
        cout << "Content of '" << filename << "': " << endl;
        string line;
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cerr << "File '" << filename << "' not found." << endl;
    }
}

void writeFile(const string& filename, const string& data) {
    ofstream file(filename);

    if(file.is_open()) {
        file << data;
        file << "\n";
        cout << "Data written to '" << filename << "' successfully." << endl;
        file.close();
    } else {
        cerr << "Error: Unable to write to file." << endl;
    }
}

void appendToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);

    if(file.is_open()) {
        file << "\n";
        file << data;
        cout << "Data appended to '" << filename << "' successfully." << endl;
        file.close();
    } else {
        cerr << "Error: Unable to append to file." << endl;
    }
}

void deleteFile(const string& filename) {
    if(remove(filename.c_str()) == 0) {
        cout << "File '" << filename << "' deleted successfully." << endl;
    } else {
        cerr << "File '" << filename << "' not found." << endl;
    }
}


int main() {
    while(true) {
        cout << "\nMenu: " << endl;
        cout << "1. Create a file" << endl;
        cout << "2. Read a file" << endl;
        cout << "3. Write to a file" << endl;
        cout << "4. Append to a file" << endl;
        cout << "5. Delet a file" << endl;
        cout << "6. Exit." << endl;

        int choice;
        cout << "Enter your choice (1/2/3/4/5/6): ";
        cin >> choice;

        string filename, data;

        switch(choice) {
            case 1:
                cout << "Enter the filename: ";
                cin >> filename;
                createFile(filename);
                break;

            case 2:
                cout << "Enter the filename to read: ";
                cin >> filename;
                readFile(filename);
                break;

            case 3:
                cout << "Enter the filename to write to: ";
                cin >> filename;
                cout << "Enter the data to write: ";
                cin.ignore();
                getline(cin, data);
                writeFile(filename, data);
                break;

            case 4:
                cout << "Enter the filename to append to: ";
                cin >> filename;
                cout << "Enter the data to append: ";
                cin.ignore();

                getline(cin, data);
                appendToFile(filename, data);
                break;

            case 5:
                cout << "Enter the filename to write to: ";
                cin >> filename;
                deleteFile(filename);
                break;

            case 6:
                cout << "GoodBye!" << endl;
                exit(0);
            
            default:
                cout << "Invalid choice. Please enter a valid option (1/2/3/4/5/6)." << endl;
        }
    }

    return 0;
}