#include "shooter.h"


Roll* Shooter::throw_die(Die& dice1, Die& dice2){
    Roll* newDice = new Roll(dice1, dice2);
    newDice->roll_die();
    rolls.push_back(newDice);
    return newDice;
}

ostream& operator <<(ostream& os, const Shooter& dice){
    for(auto i : dice.rolls){
        os<<" "<<i->roll_value();
    }
    return os;
}
