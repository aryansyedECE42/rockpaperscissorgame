#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0));  

    cout << "Let's play Rock-Paper-Scissors!" << endl;

    string choices[] = {"Rock", "Paper", "Scissors"};

    while (true) {
        int computerChoice = rand() % 3; 
        int playerChoice;

        cout << "Enter your choice:" << endl;
        cout << "0: Rock" << endl;
        cout << "1: Paper" << endl;
        cout << "2: Scissors" << endl;
        cout << "3: Quit" << endl;
        cin >> playerChoice;

        if (playerChoice == 3) {
            cout << "Quitting the game. Thanks for playing!" << endl;
            break;
        } else if (playerChoice < 0 || playerChoice > 2) {
            cout << "Invalid choice. Please choose 0, 1, 2, or 3." << endl;
            continue;
        }

        cout << "You chose: " << choices[playerChoice] << endl;
        cout << "Computer chose: " << choices[computerChoice] << endl;

        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "You win!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    return 0;
}
