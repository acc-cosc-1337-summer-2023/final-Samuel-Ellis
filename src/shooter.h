#include "roll.h"
#include "die.h"
#include<vector>
#include<iostream>
#include<memory>
using std::ostream; using std::vector;

#ifndef SHOOTER_H
#define SHOOTER_H

class Shooter{
    public:
    Roll* throw_die(Die& dice1, Die& dice2);
    friend ostream& operator<<(ostream& os, const Shooter& dice);
    ~Shooter(){for(auto i: rolls){delete i;}}

    private:
    vector<Roll*> rolls;
};




#endif