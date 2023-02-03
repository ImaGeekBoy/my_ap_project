#ifndef AB9F4993_79DB_4FA4_98EB_01FAA4DFFFC6
#define AB9F4993_79DB_4FA4_98EB_01FAA4DFFFC6

#include <iostream>
#include <vector>
#include <windows.h>
#include <algorithm>
#include <iomanip>
#include <fstream>
#include <time.h>
using namespace std;

void play();
void rankthem();
void clear();

// Menu function shows a guidence to use the app easily
void menu(){
    int order;
    cout << "************WELCOME************\n"
    "          1 -> new game\n"
    "          2 -> highscores\n"
    "          3 -> clear highscores\n"
    "          4 -> quit \n          --------> ";
    cin >> order;

    if ( order == 1 ){
        play();
    }
    else if ( order == 2 ){
        rankthem();
        menu();
    }
    else if ( order == 3 ){
        clear();
    }
    else if ( order == 4 ){
    
    }
    else {
    fflush( stdin );
    cout << "whatt!!!\n";
    }
}




#endif /* AB9F4993_79DB_4FA4_98EB_01FAA4DFFFC6 */
