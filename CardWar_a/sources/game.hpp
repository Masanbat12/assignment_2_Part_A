#include "player.hpp"
#ifndef GAME_HPP
#define GAME_HPP
namespace ariel{
    class Game{
        public:
        Game(Player &p1, Player &p2);
        /*printing turns*/
            void playTurn();

        /*print the last turn stats*/
            void printLastTurn();

        /*playes the game untill the end*/
            void playAll();

        /*prints the name of the winning player*/
            void printWiner();

        /*prints all the turns played one line per turn*/
            void printLog();

        /*printing state of play*/
            void printStats();
        
    };
    
};

#endif