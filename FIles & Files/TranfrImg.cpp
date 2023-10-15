#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ifstream sourceFile("source_image.jpg", ios::binary);

    if(!sourceFile) {
        cerr << "Error: Source image file not found or cannot be opened." << endl;
        return 1;   //abnormal termination
    }

    //Get the initial position (file size) in the source file
    sourceFile.seekg(0, ios::end);
    streampos fileSize = sourceFile.tellg();
    sourceFile.seekg(0, ios::beg);

    //open dest image for writing
    ofstream destinationFile("destination_file.jpg", ios::binary);

    if(!destinationFile) {
        cerr << "Error: Destination image file not created or cannot be opened." << endl;
        return 1;   //abnormal termination
    }

    //transfer the image data from src to dest.
    destinationFile << sourceFile.rdbuf();

    //Calculate the number of bytes transferred
    destinationFile.seekp(0, ios::end);
    streampos transferredBytes = destinationFile.tellp();
    destinationFile.seekp(0, ios::beg);

    cout << "Image Transferred successfully. Total bytes transferred: " << transferredBytes << " bytes. " << endl;


    return 0;
}