#include <iostream>
#include <vector>
using namespace std;

struct Player {
  string playerName;
    int playerJersy;
    int playerRating;
};



void initialize(vector<Player>& v){
    for (int i = 0; i < 5; i++){

    cout << "Enter player " << i + 1 << "'s name:" << endl;
    cin >> v.at(i).playerName;

    cout << "Enter player " << i + 1 << "'s jersey number:" << endl;
    cin >> v.at(i).playerJersy;

    cout << "Enter player " << i + 1 << "'s rating:" << endl;
    cin >> v.at(i).playerRating;

    cout << endl;
}

void output(const vector<Player>& v);

void addPlayer(vector<Player>& v, Player player1);
    Player player1;
    cout << "Enter a new player's jersey number:" << endl;
    cin >> player1.playerJersy;
    v.push_back(player1.playerJersy);


    cout << "Enter the player's rating:" << endl;
    int playerRating;
    cin >> playerRating;
    player.playerName =
    v.push_back(player12);
    cout << endl;

void deletePlayer(vector<Player>& v, int playerNumber);


    //find the player using her/his jersey number
    for (int i = 0; i < v.size(); ++i) {
        if (v.at(i).playerJersy == playerNumber) {
            playerJersy = i;
        }
    }
    //shift the vectors' elements up to remove the element
    for (i = 0; i < jerseyNums.size() - 1; ++i) {
        if (i >= playerJersy) {
            Names.at(i) = Names.at(i + 1);
            jerseyNums.at(i) = jerseyNums.at(i + 1);
            ratingNums.at(i) = ratingNums.at(i + 1);
        }
    }
    Names.pop_back();
    jerseyNums.pop_back();
    ratingNums.pop_back();
    cout << endl;
void updateRating(vector<Player>& v, int playerNumber, int rating);
void aboveRating(const vector<Player>& v, int rating);

int main() {

    vector<Player> playerStats(5);


    unsigned int i;
    string playerName;
    int playerJersy;
    int playerRating;
    char menuOp;

    initialize(playerStats);




    cout << "ROSTER" << endl;
    for (i = 0; i < playerStats.size(); ++i) {
        cout << "Player " << i + 1 << " -- Name: " <<playerStats.at(i).playerName<<" -- Jersey number: "
             << playerStats.at(i).playerJersy << ", Rating: " << playerStats.at(i).playerRating << endl;
    }
    cout << endl;

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
         Player add;
         addPlayer(playerStats, add);
        }

            //Delete
        else if (menuOp == 'd') {
            cout << "Enter a jersey number:" << endl;
            int playerNumber;
            cin >> playerNumber;
            deletePlayer(v,playerNumber);
        }

            //Update
        else if (menuOp == 'u') {
            cout << "Enter a jersey number:" << endl;
            cin >> playerJersy;

            cout << "Enter a new rating for player:" << endl;
            cin >> playerRating;

            for (i = 0; i < jerseyNums.size(); ++i) {
                if (jerseyNums.at(i) == playerJersy) {
                    ratingNums.at(i) = playerRating;
                }
            }
            cout << endl;
        }

            // > Rating
        else if (menuOp == 'r') {
            cout << "Enter a rating:" << endl;
            cin >> playerRating;
            cout << endl;

            cout << "ABOVE " << playerRating << endl;
            for (i = 0; i < jerseyNums.size(); ++i) {
                if (ratingNums.at(i) > playerRating) {
                    cout << "Player " << i + 1 << " -- Jersey number: "
                         << jerseyNums.at(i) << ", Rating: "
                         << ratingNums.at(i) << endl;
                }
            }
            cout << endl;

        }

        //output
        else if (menuOp == 'o') {
            cout << "ROSTER" << endl;
            for (i = 0; i < jerseyNums.size(); ++i) {
                cout << "Player " << i + 1 << " -- Name: " <<Names.at(i)<<" -- Jersey number: "
                     << jerseyNums.at(i) << ", Rating: " << ratingNums.at(i) << endl;
            }
            cout << endl;
        }

    } while(menuOp != 'q');

    return 0;
}
