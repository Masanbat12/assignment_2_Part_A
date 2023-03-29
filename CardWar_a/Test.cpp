#include "doctest.h"
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "sources/game.hpp"
#include <stdio.h>
#include <vector>
#include <stdexcept>

using namespace std;
using namespace ariel;


TEST_CASE("Test 1: check player constructor")
{
    CHECK_NOTHROW(Player("alice"));
}

TEST_CASE("Test 2: check Game constructor")
{
    Player p5 = Player("AAlice");
    Player p6 = Player("BBob");
    CHECK_NOTHROW(Game(p5, p6));
}

    Player p1 = Player("alice");
    Player p2 = Player("bob");
    Game g(p1, p2);

TEST_CASE("Test 3: check Card constructor")
{
   CHECK_NOTHROW(card(5, 'S'));
   CHECK_THROWS(card(-1, 'H'));
   CHECK_THROWS(card(14, 'C'));
   CHECK_NOTHROW(card(11, 'D'));
   CHECK_THROWS(card(0, 'C'));
}

TEST_CASE("Test 4: does have same name?")
{  
    CHECK_NOTHROW(Game(p1, p1));
}

TEST_CASE("Test 5: display of card")
{
    card c2(10, 'H');
    REQUIRE(c2.print() == "10H");        
}

TEST_CASE("Test 6: Playing a Turn")
 {
    for (int i=0;i<5;i++) {
            g.playTurn();
    }
    CHECK_NOTHROW(g.playTurn());
 }

TEST_CASE("Test 7: Printing Last Turn") 
{
    g.playTurn();
    CHECK_NOTHROW(g.printLastTurn());
}

TEST_CASE("Test 8: Playing the Game") 
{
    g.playAll();
    CHECK_NOTHROW(g.printWiner());
}

TEST_CASE("Test 9: Printing Log") 
{
    g.playAll();
    CHECK_NOTHROW(g.printLog());
}

TEST_CASE("Test 10: Printing Stats") 
{
    g.playAll();
    CHECK_THROWS(g.printStats());   
}

TEST_CASE("Test 11: Printing Last Turn stats") 
{
    g.playAll();
    CHECK_NOTHROW(g.printStats());   
}

TEST_CASE("Test 12: Checking Stack Size") 
{        
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(p2.stacksize());
}

TEST_CASE("Test 13/14: check that player cant win before playAll") 
{
    Player p3 = Player("A");
    Player p4 = Player("B");
    Game g1(p3, p4);
    for(int i = 0; i < 5 ; i++){
        g1.playTurn();
    }
   CHECK_THROWS(g1.printWiner());
    g1.playAll();
    CHECK_NOTHROW(g1.printWiner());
    
SUBCASE("\n SubTest cheking: "){
    Player p_3 = Player("Al");
    Player p_4 = Player("Bo");
    Game g12(p_3, p_4);
    g12.playAll();
    CHECK_THROWS(g12.playTurn());
}

}

 

    