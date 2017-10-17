#include "../Project/SubCommands.h"
/******************************Subclass Sandbox Pattern***********************************/


/*Test for Subclass Sandbox Pattern*/
void main() {

	cout << "Testing Player Commands" << endl << endl;

	Command* walkForward = new WalkForward();
	Command* shoot = new Shoot();
	Command* turnAround = new TurnAround();


	cout << "Testing of Player Commands Completed" << endl;

	system("pause");
}