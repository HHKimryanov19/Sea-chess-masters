#include<iostream>
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
using namespace std;
 char position[9] = { '1','2','3','4','5','6','7','8','9' };
 int player = 1;

 void choice(int playerChoice,char sign)
 {
     int newPosition = playerChoice;
     if (position[playerChoice - 1] != 'X' && position[playerChoice - 1] != 'O')
     {
          position[playerChoice - 1] = sign;
     }
     else 
     {
         while (position[newPosition - 1] == 'X' || position[newPosition - 1] == 'O')
         {
             cout << "Enter another position: ";
             cin >> newPosition;
         }
         position[newPosition - 1] = sign;
        
     }
     
 }

int checkWin()
{
    if (position[0] == position[1] && position[1] == position[2])
    {
        return 1;
    }
    else
    {
        if (position[3] == position[4] && position[4] == position[5])
        {
            return 1;
        }
        else
        {
            if (position[6] == position[7] && position[7] == position[8])
            {
                return 1;
            }
            else
            {
                if (position[0] == position[3] && position[3] == position[6])
                {
                    return 1;
                }
                else
                {
                    if (position[1] == position[4] && position[4] == position[7])
                    {
                        return 1;
                    }
                    else
                    {
                        if (position[2] == position[5] && position[5] == position[8])
                        {
                            return 1;
                        }
                        else
                        {
                            if (position[0] == position[4] && position[4] == position[8])
                            {
                                return 1;
                            }
                            else
                            {
                                if (position[2] == position[4] && position[4] == position[6])
                                {
                                    return 1;
                                }
                                else
                                {
                                    if (position[0] != '1' && position[1] != '2' && position[2] != '3' && position[3] != '4' && position[4] != '5' && position[5] != '6'
                                        && position[6] != '7' && position[7] != '8' && position[8] != '9')
                                    {
                                        return 0;
                                    }
                                    else
                                    {
                                        return -1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int main()
{
    cout << "/*___*\\" << endl;
    cout << "\\_____/" << endl;
    cout << "Hello, I'm Steve." << endl;
    cout << "Do you want to play together my favorite game tic tac toe? If you want type Y, otherwise press Enter and play with your friend." << endl;
    cout << "You should know that I am not very good and sometimes I want to put my symbol in a place where it already exists.Then press Enter." << endl;
    char playWithSteve;
    cin.get(playWithSteve);
    int playerChoice, n = 0;
    system("CLS");
    if(playWithSteve!='Y')
    {
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
            cin >> playerChoice;
            sign = (player == 1) ? 'X' : 'O';
            choice(playerChoice,sign);
            player++;
            n = checkWin();
            cout << endl;
            system("CLS");
        } while (n == -1);
    }
    else
    {
        char sign;
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
            player = (player % 2) ? 1 : 2;
            if (player == 1)
            {
                cout << "Player " << player << ", enter a number:  ";
                cin >> playerChoice;
                sign = (player == 1) ? 'X' : 'O';
                choice(playerChoice, sign);
            }
            else
            {
                cout << "Player " << player << ", enter a number:  ";
                srand(time(NULL));
                playerChoice = rand() % 9 + 1;
                cout << playerChoice << endl;
                sign = (player == 1) ? 'X' : 'O';
                choice(playerChoice, sign);
            }
            n = checkWin();
            player++;
            system("CLS");
        } while (n == -1);
    }
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
        if (n == 1)
        {
            cout << "Congratulation, player " << --player << "!" << endl;
            cout << "/*___*\\" << endl;
            cout << "\\_____/" << endl;
            cout << "See you again.Bye" << endl;
        }
        else
        {
            cout << "==> Game draw <==";
        }
        cin.ignore();
        cin.get();
        return 0;

}