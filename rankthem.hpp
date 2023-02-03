#ifndef B0EF1658_B6BA_4C05_8621_8842512E400B
#define B0EF1658_B6BA_4C05_8621_8842512E400B

#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <time.h>
using namespace std;


Player player1;
Player player2;
Player player3;
Player player4;
Player player5;

void rankthem(){
    system("cls");
    char name[256];
    int scoree;
    ifstream MyFile;
    MyFile.open("records.txt");
    // this array holds the length of names so we can print the list vertically ordered
    int headerWidths[5] = {
    int(player1.getsize()),
    int(player2.getsize()),
    int(player3.getsize()),
    int(player4.getsize()),
    int(player5.getsize())
    };
    using namespace std;
    cout << "-------------------------------\n";
    cout << left << " name" << "                  " << right << "score" << endl;
    cout << "-------------------------------\n";
    int zz=0;
    string lastname;
    if (MyFile.is_open()){
        while (zz < 5){
        MyFile >> name;MyFile >> scoree;
        if (name == lastname)   break;
        cout << left << setw(headerWidths[zz]) << name;
        cout << right << setw(21-headerWidths[zz]) << scoree << endl;
        lastname = name;
        zz++;}
    }
}
// this function clears all data stored in text file
void clear(){
int order;
system("cls");
cout << "--------------------------------\n";
cout << "\tyou sure ?\n";
cout << "\tenter 1 for yes -------> ";
cin >> order;
if (order == 1){
ofstream MyFile("records.txt");}
system("cls");
menu();
}


#endif /* B0EF1658_B6BA_4C05_8621_8842512E400B */
