#ifndef B38AB89C_A847_4F0D_9D49_F8FDFF6164E5
#define B38AB89C_A847_4F0D_9D49_F8FDFF6164E5

// creating an object of table to play with and 5 players
Table table1;
vector<Player> Pl = {player1, player2, player3, player4, player5};
// using counter as index of players
int counter = 0;
// creating the txt* file
ofstream MyFile("records.txt",ios::app);

void play(){
    // take name of player first.(this function is defined in player.h)
    Pl[counter].setname();
    int x;
    // hardness will be a timeout for cin. i couldn't do it in windows :( 
    // play function get executed till run is true and srand makes it real randomized
    int hardness = 5000;
    bool run = true;
    int answer;
    srand(time(0));
    // changechar function turns blank space to l (snake:D) and backward erases it 
    // system(cls) also clears the terminal to keep it clean
    while (run == true){
        x = rand()%36;
        table1.changechar(x);
        table1.display();
        cout << "------->";
        cin >> answer;
        table1.backward(x);
        system("cls");
        hardness -= 100;
        if (table1.istrue(answer) == false ){run = false;MyFile << Pl[counter].getname();MyFile << " " << Pl[counter].getscore()<< " " << endl;counter++;
;
}
        else if (table1.istrue(answer) == true ){Pl[counter].scoreplus();}
    }
    cout << "\nGAME OVER !\n";
    Sleep(1000);
    menu();
}


#endif /* B38AB89C_A847_4F0D_9D49_F8FDFF6164E5 */
