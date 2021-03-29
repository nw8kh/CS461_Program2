//Program 2 for UMKC CS461 by Nick Wilmsmeyer

#include <iostream>
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>

using namespace std;
int main() {

    vector<string> studentComp;
    vector<int> compNum;
    int studentCount = 0;
    string text = "";
    fstream newfile;

    newfile.open("roommates.txt", ios::in);
    if (newfile.is_open()) {
        while (!newfile.eof()) {
                //getline(newfile, text);
                newfile >> text;
                studentComp.push_back(text);
                text.clear();
                studentCount++;
            if(studentCount)
        }

        for (int i = 0; i < studentComp.size(); i++) {
            int num = atoi(studentComp.at(i).c_str());
            compNum.push_back(num);
        }
        newfile.close();
        cout << "The conversion has been successfully completed.";
    } else {
        cout << "The file could not be opened.";
    }
    cout << "The number of students: " << studentCount << "\n";
    for (int l = 0; l < compNum.size(); l++) {
        cout << compNum.at(l) << " ";
    }
    //cout << "\nValue at 4000: " << compNum.at(4000);
}

