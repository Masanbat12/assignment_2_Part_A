#include <string>
#ifndef CARD_HPP
#define CARD_HPP

namespace ariel{
using string = std::string;
    class card{
        public:
        card(int num, char type);
        
        string print();
    };
};

#endif