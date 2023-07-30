#include "roll.h"

void Roll::roll_die(){
    die1.roll();
    die2.roll();
    value = die1.rolled_value()+die2.rolled_value();
    rolled = true;
}

int const Roll::roll_value(){
    return value;
}

void Roll::set_value(int val){
    value = val;
}