#include"die.h"
#include"roll.h"
#include"shooter.h"
#include"come_out_phase.h"
#include"point_phase.h"
#include"phase.h"
#include<iostream>

using std::cout;

int main() 
{
	srand(time(0));
	
	Die die1;
	Die die2;
	Shooter shooter;
	Roll* roll;
	ComeOutPhase come_out_phase;

	roll = shooter.throw_die(die1,die2);

	while (come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps){
		cout<<roll->roll_value()<<" was rolled. Roll again\n";
		roll = shooter.throw_die(die1,die2);
	}
	
	cout<<roll->roll_value()<<" was rolled. Start of point phase\n";
	int point = roll->roll_value();
	cout<<"Roll until "<<point<<" or a 7 is rolled\n";
	PointPhase point_phase(point);
	roll = shooter.throw_die(die1,die2);

	while (!(point_phase.get_outcome(roll) == RollOutcome::seven_out || point_phase.get_outcome(roll) == RollOutcome::point)){
		cout<<roll->roll_value()<<" was rolled. Roll again\n";
		roll = shooter.throw_die(die1,die2);
	}

	cout<<roll->roll_value()<<" was rolled. End of point phase\n";
	cout<<"All rolls:"<<shooter;
	return 0;
}