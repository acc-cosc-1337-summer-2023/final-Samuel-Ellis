#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include <iostream>
using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing die class"){
	die dice;
	for (int i = 0; i < 10; i++)
	{
		dice.roll();
		//cout<<dice.rolled_value()<<"\n";
		if(dice.rolled_value() == 1){
			REQUIRE(dice.rolled_value() == 1);
		} else if(dice.rolled_value() == 2){
			REQUIRE(dice.rolled_value() == 2);
		} else if(dice.rolled_value() == 3){
			REQUIRE(dice.rolled_value() == 3);
		} else if(dice.rolled_value() == 4){
			REQUIRE(dice.rolled_value() == 4);
		} else if(dice.rolled_value() == 5){
			REQUIRE(dice.rolled_value() == 5);
		} else if(dice.rolled_value() == 6){
			REQUIRE(dice.rolled_value() == 6);
		} else {
			REQUIRE(dice.rolled_value() == 1);
		}
	}
	
}