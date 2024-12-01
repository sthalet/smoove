#include <iostream>
#include <string>
#include "MyClasses.h"

class Game;
class rdr2;
int main(){
    rdr2 tf2;
    denemeClass deneme;
    deneme.yazdir;
    return 0;

}

class Game  {
    public:
        int release_date;
        std::string genre;
        char rate;
};
class rdr2:public Game{
    public:
        int bounty;
        char nameInitial = 'c';
};