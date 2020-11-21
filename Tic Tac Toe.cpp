#include <iostream>
using namespace std;
int main()
{
    char position[9] = { '1','2','3','4','5','6','7','8','9' };
    cout << "Tic Tac Toe" << endl;

    cout << "Player 1 (X)  -  Player 2 (O)" << endl;
    cout << endl;
    cout << " _____" << " _____ " << "_____" << endl;
    cout << "|     |     |     |" << endl;
    cout << "|  " << position[0] << "  |  " << position[1] << "  |  " << position[2] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << position[3] << "  |  " << position[4] << "  |  " << position[5] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl;
    cout << "|     |     |     |" << endl;

    cout << "|  " << position[6] << "  |  " << position[7] << "  |  " << position[8] << "  |" << endl;

    cout << "|_____|_____|_____|" << endl << endl;
}

