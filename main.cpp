#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string playerName;
    int playerJersey;
    int playerRating;
};

void initialize(vector<Player>& v) {

    for (int i = 0; i < v.size(); ++i) {

        cout << "Enter player " << i + 1 << "'s name:" << endl;
        cin >> v.at(i).playerName;

        cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
        cin >> v.at(i).playerJersey;

        cout << "Enter player " << i + 1 << "'s rating:" << endl;
        cin >> v.at(i).playerRating;

        cout << endl;
    }

    cout << "ROSTER" << endl;
    for ( int i = 0; i < v.size(); ++i) {
        cout << "Player " << i + 1 << " -- Name: " << v.at(i).playerName << " -- Jersey number: "
             << v.at(i).playerJersey << ", Rating: " << v.at(i).playerRating << endl;
    }
    cout << endl;
}

void output(const vector<Player>& v){
    cout << "ROSTER" << endl;
    for (int i = 0; i < v.size(); ++i) {
        cout << "Player " << i + 1 << " -- Name: " <<v.at(i).playerName<<" -- Jersey number: "
             << v.at(i).playerJersey << ", Rating: " << v.at(i).playerRating << endl;
    }
    cout << endl;

}

void addPlayer(vector<Player>& v, Player player1) {

    cout << "Enter a new player's jersey number:" << endl;
    cin >> player1.playerJersey;
    cout << "Enter the player's rating:" << endl;
    cin >> player1.playerRating;
    cout << "Enter the player's name:" << endl;
    cin >> player1.playerName;
    v.push_back(player1);
    cout << endl;



}


void deletePlayer(vector<Player>& v, int playerNumber){



//find the player using her/his jersey number
    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i).playerJersey == playerNumber) {
            playerNumber = i;
        }
    }


//shift the vectors' elements up to remove the element

    for (int i = 0; i < v.size() - 1; ++i) {
        if (i >= playerNumber) {
            v.at(i).playerName = v.at(i + 1).playerName;
            v.at(i).playerJersey = v.at(i + 1).playerJersey;
            v.at(i).playerRating = v.at(i + 1).playerRating;
        }
    }
    v.pop_back();




    cout << endl;
}
void updateRating(vector<Player>& v, int playerNumber, int rating){



    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i).playerJersey == playerNumber) {
            v.at(i).playerRating = rating;
        }
    }
    cout << endl;


}
void aboveRating(const vector<Player>& v, int rating) {

    cout << "ABOVE " << rating << endl;
    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i).playerRating > rating) {
            cout << "Player " << i + 1 << " -- Jersey number: "
                 << v.at(i).playerJersey << ", Rating: "
                 << v.at(i).playerRating << endl;
        }
    }
    cout << endl;
}
int main() {

    vector<string> Names(5);
    vector<int> jerseyNums(5);
    vector<int> ratingNums(5);

    unsigned int i;
    string playerName;
    int playerJersy;
    int playerRating;
    char menuOp;

    vector <Player> status (5);

    initialize(status);



    do {
        cout << "MENU" << endl;
        cout << "a - Add player" << endl;
        cout << "d - Remove player" << endl;
        cout << "u - Update player rating" << endl;
        cout << "r - Output players above a rating" << endl;
        cout << "o - Output roster" << endl;
        cout << "q - Quit" << endl << endl;

        cout << "Choose an option:" << endl;
        cin >> menuOp;

        //Add
        if (menuOp == 'a') {
            Player object;
            addPlayer(status, object);
        }

            //Delete
        else if (menuOp == 'd') {
            cout << "Enter a jersey number:" << endl;
            cin >> playerJersy;

            deletePlayer(status, playerJersy);

            cout << endl;
        }

            //Update
        else if (menuOp == 'u') {
            int playerNumber;
            cout << "Enter a jersey number:" << endl;
            cin >> playerNumber;
            int rating;
            cout << "Enter a new rating for player:" << endl;
            cin >> rating;
            updateRating(status, playerNumber, rating);
            cout << endl;
        }

            // > Rating
        else if (menuOp == 'r') {
            cout << "Enter a rating:" << endl;
            cin >> playerRating;
            cout << endl;
            aboveRating(status, playerRating);

            cout << endl;

        }

            //output
        else if (menuOp == 'o') {
            output(status);
            cout << endl;
        }

    } while(menuOp != 'q');

    return 0;
}