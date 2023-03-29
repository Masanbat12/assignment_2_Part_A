#include <string>
#include "card.hpp"
#include "player.hpp"

namespace ariel{
    using namespace std;
    string name;
    Player::Player(string name){};

    int Player::stacksize(){return 0;};

    int Player::cardesTaken(){return 0;};

  
    // vector<card> player_cards(26);

    // card Player::add_C(int i, char t){ 
    //     player_cards.push_back(card(i,t));
    // }
};