#include <iostream>
#include <string>

int main()
{
    char Ttt[3][3]{
       {'-', '-', '-'},
       {'-', '-', '-'},
       {'-', '-', '-'}
    };
    string Plyr1;
    string Plyr2;
 
    cout << "\t\t\t\t     ***  TIC - TAC - TOE  ***\n\n";
    cout << "\t\t\t\t        Welcome to our Game\n\n";
 
    // Player information
 
    cout << "Enter player 1 name : ";
    getline (cin, Plyr1);
    cout << "Enter player 2 name : ";
    getline(cin, Plyr2);
 
    // Input Location format 
 
    cout << "\nChoose following format to enter input\n\n";
    cout << " 1 | 2 | 3 " << endl;
    cout << " 4 | 5 | 6 " << endl;
    cout << " 7 | 8 | 9 " << endl << endl;
 
    // Input
    string Winner = Playerinput(Ttt, &Plyr1, &Plyr2);
    // output
    display(&Winner, Plyr1, Plyr2);
 
}