#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "die.h"
#include"roll.h"
#include"shooter.h"
#include"come_out_phase.h"
#include"point_phase.h"
#include <iostream>
using std::cout;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing die class"){
	Die dice;
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
			REQUIRE(false);
		}
	}
	
}

TEST_CASE("Testing roll class"){
	Die dice1;
	Die dice2;
	Roll dice(dice1, dice2);
	for (int i = 0; i < 10; i++)
	{
		dice.roll_die();
		//cout<<dice.roll_value()<<" \n";
		if(dice.roll_value() == 2){
			REQUIRE(dice.roll_value() == 2);
		} else if(dice.roll_value() == 3){
			REQUIRE(dice.roll_value() == 3);
		} else if(dice.roll_value() == 4){
			REQUIRE(dice.roll_value() == 4);
		} else if(dice.roll_value() == 5){
			REQUIRE(dice.roll_value() == 5);
		} else if(dice.roll_value() == 6){
			REQUIRE(dice.roll_value() == 6);
		} else if(dice.roll_value() == 7){
			REQUIRE(dice.roll_value() == 7);
		} else if(dice.roll_value() == 8){
			REQUIRE(dice.roll_value() == 8);
		} else if(dice.roll_value() == 9){
			REQUIRE(dice.roll_value() == 9);
		} else if(dice.roll_value() == 10){
			REQUIRE(dice.roll_value() == 10);
		} else if(dice.roll_value() == 11){
			REQUIRE(dice.roll_value() == 11);
		} else if(dice.roll_value() == 12){
			REQUIRE(dice.roll_value() == 12);
		} else {
			REQUIRE(false);
		}
	}
	

}

TEST_CASE("Testing Shooter class"){
	Die dice1;
	Die dice2;
	Shooter shoot;
	for (int i = 0; i < 10; i++)
	{
		Roll dice = *shoot.throw_die(dice1, dice2);
		//cout<<dice.roll_value()<<"\n";
		if(dice.roll_value() == 2){
			REQUIRE(dice.roll_value() == 2);
		} else if(dice.roll_value() == 3){
			REQUIRE(dice.roll_value() == 3);
		} else if(dice.roll_value() == 4){
			REQUIRE(dice.roll_value() == 4);
		} else if(dice.roll_value() == 5){
			REQUIRE(dice.roll_value() == 5);
		} else if(dice.roll_value() == 6){
			REQUIRE(dice.roll_value() == 6);
		} else if(dice.roll_value() == 7){
			REQUIRE(dice.roll_value() == 7);
		} else if(dice.roll_value() == 8){
			REQUIRE(dice.roll_value() == 8);
		} else if(dice.roll_value() == 9){
			REQUIRE(dice.roll_value() == 9);
		} else if(dice.roll_value() == 10){
			REQUIRE(dice.roll_value() == 10);
		} else if(dice.roll_value() == 11){
			REQUIRE(dice.roll_value() == 11);
		} else if(dice.roll_value() == 12){
			REQUIRE(dice.roll_value() == 12);
		} else {
			REQUIRE(false);
		}
	}
	

}

TEST_CASE("Testing ComeOutPhase class"){
	ComeOutPhase something;
	Die dice1;
	Die dice2;
	Roll roll1(dice1, dice2);
	Roll roll2(dice1, dice2);
	Roll roll3(dice1, dice2);
	roll1.set_value(7);
	roll2.set_value(2);
	roll3.set_value(5);
	REQUIRE(something.get_outcome(&roll1) == RollOutcome::natural);
	REQUIRE(something.get_outcome(&roll2) == RollOutcome::craps);
	REQUIRE(something.get_outcome(&roll3) == RollOutcome::point);
}

TEST_CASE("Testing PointPhase class"){
	PointPhase something(3);
	Die dice1;
	Die dice2;
	Roll roll1(dice1, dice2);
	Roll roll2(dice1, dice2);
	Roll roll3(dice1, dice2);
	roll1.set_value(3);
	roll2.set_value(7);
	roll3.set_value(5);
	REQUIRE(something.get_outcome(&roll1) == RollOutcome::point);
	REQUIRE(something.get_outcome(&roll2) == RollOutcome::seven_out);
	REQUIRE(something.get_outcome(&roll3) == RollOutcome::nopoint);
}