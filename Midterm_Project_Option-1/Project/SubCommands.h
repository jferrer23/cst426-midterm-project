#include "Command.h"
/******************************Subclass Sandbox Pattern***********************************/


/*Subclasses that inherit from command. To create new commands, inherit from
Command and define the subclass sandbox method activate().
*/

class WalkForward : public Command
{
public:
	WalkForward()
	{
		cout << "Enabling command walk forward using Walkforward class constructor" << endl;
		activate();
	}
protected:
	//Defining the subclass sandbox method.
	virtual void activate()
	{
		cout << "Calling activate() function in WalkForward class" << endl;
		posEffect(0, 0, 20); cout << "Player moves forward" << endl;
		envEffect("Camera moves forward with Player");
		playSound("Play Forward Footsteps sfx", 1.0f);
	}
};

class Shoot : public Command
{
public:
	Shoot()
	{
		cout << "Enabling command shoot using Shoot class constructor" << endl;
		activate();
	}
protected:
	//Defining the subclass sandbox method.
	virtual void activate()
	{
		cout << "Calling activate() function in Shoot class" << endl;
		posEffect(0, 0, 20); cout << "command does not affect position" << endl;
		envEffect("Available projectile is launched from Player");
		playSound("Play Shooting sfx", 1.0f);
	}
};

class TurnAround : public Command
{
public:
	TurnAround()
	{
		cout << "Enabling command turn around using TurnAround class constructor" << endl;
		activate();
	}
protected:
	//Defining the subclass sandbox method.
	virtual void activate()
	{
		cout << "Calling activate() function in TurnAround class" << endl;
		posEffect(0, 0, 20); cout << "Player rotates 180 degrees" << endl;
		envEffect("Camera rotates with Player");
		playSound("Play Quick Turn sfx", 1.0f);
	}
};
