#include "die.h"
void die::roll(){
    roll_value = (rand()%6)+1;
}

int const die::rolled_value(){
    return roll_value;
}