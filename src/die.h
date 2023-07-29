#include<iostream>
#include<cmath>
#ifndef DIE_H
#define DIE_H

class die{
public:
void roll();
int const rolled_value();
private:
int roll_value;
int sides{6};
};




#endif