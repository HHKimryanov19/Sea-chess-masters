#include <iostream>
using namespace std;
int main()
{
    char position[9] = { '1','2','3','4','5','6','7','8','9' };
    int player = 1, choice,n=0;
    
    do
    {
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
    char sign;

        player = (player % 2) ? 1 : 2;
        cout << "Player " << player << ", enter a number:  ";
        cin >> choice;
        sign = (player == 1) ? 'X' : 'O';
        switch (choice)
        {
        case 1:
            if (position[0] == '1')
            {
                position[0] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 2:
            if (position[1] == '2')
            {
                position[1] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 3:
            if (position[2] == '3')
            {
                position[2] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 4:
            if (position[3] == '4')
            {
                position[3] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 5:
            if (position[4] == '5')
            {
                position[4] = sign;
            }
            else
            {

                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 6:
            if (position[5] == '6')
            {
                position[5] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 7:
            if (position[6] == '7')
            {
                position[6] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 8:
            if (position[7] == '8')
            {
                position[7] = sign;
            }
            else
            {
                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        case 9:
            if (position[8] == '9')
            {
                position[8] = sign;
            }
            else
            {

                cout << "Invalid move. Place player " << player << " press Enter and try again.";
                player--;
                cin.ignore();
                cin.get();
                n--;
            }
            break;
        }
        player++;
        n++;
        cout << endl;
    } while (n<=9);
    cin.ignore();
    cin.get();
    return 0;
}
