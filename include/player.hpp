#ifndef CB67FA8A_3012_4D1E_86CD_A2B5E074CE99
#define CB67FA8A_3012_4D1E_86CD_A2B5E074CE99

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std; 


class Player{
string name;
int namesize;
public:
int score = 0;
void setname(){
    cout << "Enter your name: ";
    cin >> name;
    namesize = name.size();
}
void show(){
    char x;
    system("cls");
    cout << "player: " << name << "\tscore: " << score << endl;
}
void scoreplus(){
    score++;
}
string getname(){
    return name;
}
int getscore(){
    return score;
}
int getsize(){
    return namesize;
}
};


#endif /* CB67FA8A_3012_4D1E_86CD_A2B5E074CE99 */
