#include <string>
#include "card.hpp"
// #include <vector>

#ifndef PLAYER_HPP
#define PLAYER_HPP
namespace ariel{
    using std::string;

class Player{
    private:
    bool _is_active;

    public:
        Player(std::string name);

    /*prints the amount of cards left*/
        int stacksize();

    /*prints the amount of cards this player has won*/
        int cardesTaken();

    // /*adding card to hand of player*/
    //     card add_C(int n, char t);
        
    };
};
#endif