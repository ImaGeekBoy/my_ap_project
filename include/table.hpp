#ifndef C2E7841B_0808_45E3_B991_F1EA6EE246F5
#define C2E7841B_0808_45E3_B991_F1EA6EE246F5

#include <iostream>
using namespace std;


class Table{
    char chart[1024]
   =
    "\n    1   2   3   4   5   6  \n"
    "  -------------------------\n"
    "1 |   |   |   |   |   |   |\n"
    "2 |   |   |   |   |   |   |\n"
    "3 |   |   |   |   |   |   |\n"
    "4 |   |   |   |   |   |   |\n"
    "5 |   |   |   |   |   |   |\n"
    "6 |   |   |   |   |   |   |\n"
    "  -------------------------";
    char Solution;
    vector<vector<int> > table
    {
    { 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0},
    { 0, 0, 0, 0, 0, 0}
    };
public:

void display(){
    cout << chart << endl;
}

void changechar(int a){
    if (a == 0){
    chart[221] = 'l'; Solution = 66;}
    else if (a == 35){
    chart[217] = 'l'; Solution = 65;}
    else if (a == 34){
    chart[213] = 'l'; Solution = 64;}
    else if (a == 33){
    chart[209] = 'l'; Solution = 63;}
    else if (a == 32){
    chart[205] = 'l'; Solution = 62;}
    else if (a == 31){
    chart[201] = 'l'; Solution = 61;}
    else if (a == 30){
    chart[193] = 'l'; Solution = 56;}
    else if (a == 29){
    chart[189] = 'l'; Solution = 55;}
    else if (a == 28){
    chart[185] = 'l'; Solution = 54;}
    else if (a == 27){
    chart[181] = 'l'; Solution = 53;}
    else if (a == 26){
    chart[177] = 'l'; Solution = 52;}
    else if (a == 25){ 
    chart[173] = 'l'; Solution = 51;}
    else if (a == 24){
    chart[165] = 'l'; Solution = 46;}
    else if (a == 23){
    chart[161] = 'l'; Solution = 45;}
    else if (a == 22){
    chart[157] = 'l'; Solution = 44;}
    else if (a == 21){
    chart[153] = 'l'; Solution = 43;}
    else if (a == 20){
    chart[149] = 'l'; Solution = 42;}
    else if (a == 19){
    chart[145] = 'l'; Solution = 41;}
    else if (a == 18){
    chart[137] = 'l'; Solution = 36;}
    else if (a == 17){
    chart[133] = 'l'; Solution = 35;}
    else if (a == 16){
    chart[129] = 'l'; Solution = 34;}
    else if (a == 15){
    chart[125] = 'l'; Solution = 33;}
    else if (a == 14){
    chart[121] = 'l'; Solution = 32;}
    else if (a == 13){
    chart[117] = 'l'; Solution = 31;}
    else if (a == 12){
    chart[109] = 'l'; Solution = 26;}
    else if (a == 11){
    chart[105] = 'l'; Solution = 25;}
    else if (a == 10){
    chart[101] = 'l'; Solution = 24;}
    else if (a == 9){
    chart[97] = 'l'; Solution = 23;}
    else if (a == 8){
    chart[93] = 'l'; Solution = 22;}    
    else if (a == 7){
    chart[89] = 'l'; Solution = 21;}
    else if (a == 6){
    chart[81] = 'l'; Solution = 16;}
    else if (a == 5){
    chart[77] = 'l'; Solution = 15;}
    else if (a == 4){
    chart[73] = 'l'; Solution = 14;}
    else if (a == 3){
    chart[69] = 'l'; Solution = 13;}
    else if (a == 2){
    chart[65] = 'l'; Solution = 12;}
    else if (a == 1){
    chart[61] = 'l'; Solution = 11;}
}

void backward(int a){
    if (a == 0)
    chart[221] = ' ';
    else if (a == 35)
    chart[217] = ' ';
    else if (a == 34)
    chart[213] = ' ';
    else if (a == 33)
    chart[209] = ' ';
    else if (a == 32)
    chart[205] = ' ';
    else if (a == 31)
    chart[201] = ' ';
    else if (a == 30)
    chart[193] = ' ';
    else if (a == 29)
    chart[189] = ' ';
    else if (a == 28)
    chart[185] = ' ';
    else if (a == 27)
    chart[181] = ' ';
    else if (a == 26)
    chart[177] = ' ';
    else if (a == 25)
    chart[173] = ' ';
    else if (a == 24)
    chart[165] = ' ';
    else if (a == 23)
    chart[161] = ' ';
    else if (a == 22)
    chart[157] = ' ';
    else if (a == 21)
    chart[153] = ' ';
    else if (a == 20)
    chart[149] = ' ';
    else if (a == 19)
    chart[145] = ' ';
    else if (a == 18)
    chart[137] = ' ';
    else if (a == 17)
    chart[133] = ' ';
    else if (a == 16)
    chart[129] = ' ';
    else if (a == 15)
    chart[125] = ' ';
    else if (a == 14)
    chart[121] = ' ';
    else if (a == 13)
    chart[117] = ' ';
    else if (a == 12)
    chart[109] = ' ';
    else if (a == 11)
    chart[105] = ' ';
    else if (a == 10)
    chart[101] = ' ';
    else if (a == 9)
    chart[97] = ' ';
    else if (a == 8)
    chart[93] = ' ';
    else if (a == 7)
    chart[89] = ' ';
    else if (a == 6)
    chart[81] = ' ';
    else if (a == 5)
    chart[77] = ' ';
    else if (a == 4)
    chart[73] = ' ';
    else if (a == 3)
    chart[69] = ' ';
    else if (a == 2)
    chart[65] = ' ';
    else if (a == 1)
    chart[61] = ' ';
}

bool istrue( int a ){
    if ( a == Solution ) return true;
    else return false;
}

};


#endif /* C2E7841B_0808_45E3_B991_F1EA6EE246F5 */
